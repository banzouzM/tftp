#ifndef SERVER_H_
#define SERVER_H_

#include "socketUDP.h"
#include "AdresseInternetType.h"

#define TFTP_PORT 6969

typedef struct {
	AdresseInternet *client_addr;
	char filename[256];
	SocketUDP *sock;
}thread_args_type;


typedef void *(*start_routine_type)(void *);
void *run(thread_args_type *arg);

#endif // SERVER_H_
