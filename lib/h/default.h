#ifndef _HEADER_MAIN_
#define _HEADER_MAIN_

#define _GNU_SOURCE

/* Include locaux */

/* Include globaux  */

// Basique

#include <features.h>

#include <stdio.h>
#include <stdlib.h>

#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include <pthread.h>
#include <ctype.h>

// Systeme

#include <sys/ioctl.h>
#include <sys/socket.h>
#include <sys/stat.h>
#include <sys/syscall.h>
#include <sys/types.h>
#include <sys/wait.h>

#include <fcntl.h>

// Reseau

#include <netinet/in.h>
#include <net/if.h>
#include <arpa/inet.h>
#include <netdb.h>

#define viderEcran printf("o\e[1;1H\e[2J")
#define entrerPourContinuer while(1){char msg_entree= __CHAR_NUL__; printf("Tapez entrée pour continuer\n"); scanf("%c",&msg_entree); if( msg_entree == '\n') {viderEcran; break;} }

/* Defines */

#define CONTINUER 1
#define BUFFERSIZE 1024
#define BUFFERMIN 128
#define __SUCCESS_ERRNO__ 0
#define __ERROR_CREAT__ -1
#define __ERROR_FORK__ -1
#define __ATTENTE__ sleep(2);
#define __VALEUR_NULLE__ 0

/* Enum */

typedef enum
  {
    faux,
    vrai,
  }booleen;

/* Structures */

/* Prototypes */

void fin_programme(void);

/* Extern */

extern int errno;
extern char **environ;


#endif
