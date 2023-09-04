#include "main.h"
#include <elf.h>

/**
 * dahshan_displayElfHeader - main function to display informations
 * in ELF header of an ELF file.
 * @filename: ELF file name.
 * Return: 0 on success, or 98 on error.
 */
int dahshan_displayElfHeader(const char *filename)
{
	int fd = open(filename, O_RDONLY);
	Elf64_Ehdr elfHeader;
	ssize_t bytesRead = read(fd, &elfHeader, sizeof(Elf64_Ehdr));

	if (fd == -1)
	{
	fprintf(stderr, "[ERROR] Failed to open file: %s\n", filename);
	return (98);
	}

	if (bytesRead != sizeof(Elf64_Ehdr))
	{
	fprintf(stderr, "[ERROR] Failed to read ELF header from file: %s\n",
			filename);
	close(fd);
	return (98);
	}

	printf("Magic: %02x %02x %02x %02x\n", elfHeader.e_ident[EI_MAG0],
			elfHeader.e_ident[EI_MAG1], elfHeader.e_ident[EI_MAG2],
					elfHeader.e_ident[EI_MAG3]);
	printf("Class: %s\n", elfHeader.e_ident[EI_CLASS] == ELFCLASS32 ?
			"ELF32" : "ELF64");
	printf("Data: %s\n", elfHeader.e_ident[EI_DATA] == ELFDATA2LSB ?
			"2's complement, little endian" : "2's complement, big endian");
	printf("Version: %d\n", elfHeader.e_ident[EI_VERSION]);
	printf("OS/ABI: %s\n", elfHeader.e_ident[EI_OSABI] == ELFOSABI_SYSV ?
			"UNIX - System V" : "Other");
	printf("ABI Version: %d\n", elfHeader.e_ident[EI_ABIVERSION]);
	printf("Type: %s\n", elfHeader.e_type == ET_EXEC ? "EXEC (Executable file)" :
			(elfHeader.e_type == ET_DYN ? "DYN (Shared object file)" : "Other"));
	printf("Entry point address: 0x%lx\n", elfHeader.e_entry);

	close(fd);
	return (0);
}

/**
 * main - main entry point for displaying ELF header of a file
 *
 * Description: a program takes in a command line argument
 * specifying the name of an ELF file and displays the ELF header
 * of that file. If the number of command line arguments is not exactly 2,
 * it prints an error message to the standard error stream and
 * returns 1. Otherwise, it calls`displayElfHeader` function with the specified
 * filename and assigns the status code returned to `status` variable.
 * @argc: number of command line args passed to program
 * @argv: array of strings contain command line args
 *
 * Return: return status on success or 1 on error
 */

int main(int argc, char *argv[])
{
	int status = dahshan_displayElfHeader(argv[1]);

	if (argc != 2)
	{
		fprintf(stderr, "[ERROR] Usage: %s elf_filename\n", argv[0]);
		return (1);
	}

	return (status);
}
