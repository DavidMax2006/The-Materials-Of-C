#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/socket.h>

#define  SERVER_PORT 8003
#define  MSG_BUF_SIZE 512
int port = SERVER_PORT;

void main() {
  int sockfd;
  int count = 0;
  int flag;
  char buf[MSG_BUF_SIZE];
  struct sockaddr_in address;
  //create a data-form type socket
  if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) == -1) {
    fprintf(stderr, "socket error\n");
    exit(1);
  }

  memset(&address, 0, sizeof(address));
  address.sin_family = AF_INET;
  address.sin_addr.s_addr = inet_addr("127.0.0.1");
  address.sin_port = htons(port);
  flag = 1;
  do {
    sprintf(buf, "Packet %dn\n", count);
    if (count > 30) {
      sprintf(buf, "overn\n");
      flag = 0;
    }
    sendto(sockfd, buf, sizeof(buf), 0, (struct sockaddr *)&address, sizeof(address));
    count ++;
  } while(flag);
}
