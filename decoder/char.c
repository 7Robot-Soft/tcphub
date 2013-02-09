#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "client.h"

int recvbufsize = 256;
int sendbufsize = 10480;

int client_decoder_init(Client *client)
{
    return 0;
}

void client_decoder_clear(Client *client)
{
}

int client_decode(Client *client)
{
    return 1;
}

void client_decoder_destroy(Client *client)
{
}
