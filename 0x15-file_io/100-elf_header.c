#include"main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <errno.h>
#include <err.h>

void print_error_exit(const char *msg, int status) {
    fprintf(stderr, "%s: %s\n", msg, strerror(errno));
    exit(status);
}

void print_elf_header_info(Elf64_Ehdr *header) {

    printf("Magic:   %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n",
           header->e_ident[EI_MAG0], header->e_ident[EI_MAG1], header->e_ident[EI_MAG2], header->e_ident[EI_MAG3],
           header->e_ident[EI_MAG4], header->e_ident[EI_MAG5], header->e_ident[EI_MAG6], header->e_ident[EI_MAG7],
           header->e_ident[EI_MAG8], header->e_ident[EI_MAG9], header->e_ident[EI_MAG10], header->e_ident[EI_MAG11],
           header->e_ident[EI_MAG12], header->e_ident[EI_MAG13], header->e_ident[EI_MAG14], header->e_ident[EI_MAG15]);

    printf("Class:                             %d-bit\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? 32 : 64);
    printf("Data:                              %s-endian\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "little" : "big");
    printf("Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    printf("OS/ABI:                            %d\n", header->e_ident[EI_OSABI]);
    printf("ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("Type:                              %d (EXEC)\n", header->e_type);
    printf("Entry point address:               0x%lx\n", (unsigned long)header->e_entry);
}

int main(int argc, char *argv[]) {
    const char *elf_filename;
    int fd;
    Elf64_Ehdr elf_header;


    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }

    elf_filename = argv[1];

    fd = open(elf_filename, O_RDONLY);
    if (fd == -1) {
        print_error_exit("Error opening file", 98);
    }

    if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) == -1) {
        print_error_exit("Error reading ELF header", 98);
    }

    if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0) {
        fprintf(stderr, "Error: Not an ELF file\n");
        return 98;
    }

    lseek(fd, (off_t)0, SEEK_SET);

    print_elf_header_info(&elf_header);

    close(fd);

    return 0;
}