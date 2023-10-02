#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>

/**
 * print_error - main function to print an error message
 * to stderr and exits with status code 98.
 * @message: Error message to be printed.
 */
void print_error(const char *message)
{
fprintf(stderr, "Error: %s\n", message);
exit(98);
}

/**
 * print_elf_header_info - main function to print information
 * included in an ELF header.
 * @header: Pointer to an ELF header structure.
 */
void print_elf_header_info(const Elf64_Ehdr *header)
{
int z = 0;

printf("Magic:   ");

for (z = 0; z < EI_NIDENT; z++)
{
printf("%02x ", header->e_ident[z]);
}
printf("\n");
printf("Class: %s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ?
	"ELF32" : "ELF64");
printf("Data: %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ?
	"2's complement, little endian" : "2's complement, big endian");
printf("Version: %d (current)\n", header->e_ident[EI_VERSION]);
printf("OS/ABI: %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ?
	"UNIX System V ABI" : "Other");
printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
printf("Type: %s\n", header->e_type == ET_EXEC ?
	"EXEC (Executable file)" : "Other");
printf("Entry point address: %lu\n", (unsigned long) header->e_entry);
}

/**
 * main - main entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: An array of strings contains command-line arguments.
 * Return: 0 on successful execution.
 */
int main(int argc, char *argv[])
{
const char *filename = argv[1];
int fd = open(filename, O_RDONLY);
Elf64_Ehdr header;
ssize_t bytes_read = read(fd, &header, sizeof(header));

if (argc != 2)
	print_error("Incorrect number of arguments.");
if (fd == -1)
	print_error("Cannot open file.");
if (bytes_read == -1 || bytes_read != sizeof(header))
	print_error("Cannot read file.");

print_elf_header_info(&header);

if (close(fd) == -1)
	print_error("Cannot close file.");

return (0);
}
