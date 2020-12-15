#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/stat.h>

int main(int argc,char *argv[]) {
	struct stat statbuf;
	if (lstat(argv[1], &statbuf) == -1) {
		printf("Couldn't stat file");
		exit(0);
	}
	printf("File: %s\n", argv[1]);
	printf("Inode no : %ld\n", statbuf.st_ino);
	printf("Type and permission:  %o | ", statbuf.st_mode );
    printf( (S_ISDIR(statbuf.st_mode)) ? "d" : "-");
    printf( (statbuf.st_mode & S_IRUSR) ? "r" : "-");
    printf( (statbuf.st_mode & S_IWUSR) ? "w" : "-");
    printf( (statbuf.st_mode & S_IXUSR) ? "x" : "-");
    printf( (statbuf.st_mode & S_IRGRP) ? "r" : "-");
    printf( (statbuf.st_mode & S_IWGRP) ? "w" : "-");
    printf( (statbuf.st_mode & S_IXGRP) ? "x" : "-");
    printf( (statbuf.st_mode & S_IROTH) ? "r" : "-");
    printf( (statbuf.st_mode & S_IWOTH) ? "w" : "-");
    printf( (statbuf.st_mode & S_IXOTH) ? "x" : "-");
	printf("\nNo of links: %ld\n", statbuf.st_nlink);
	printf("UID : %d\n", statbuf.st_uid);
	printf("GID : %d\n", statbuf.st_gid);
	
	exit(0);
}