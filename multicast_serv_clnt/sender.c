#include<stdio.h>
#define BUF_SIZE 1024
void error_handling(const char* message);
int main(int argc ,char* argv[])
	sock=socket(AF_INET,SOCK_DGRAM,0);
	memset(&addr,0,sizeof(addr));
	setsockopt(sock,IPPROTO_IP,IP_MULTICAST_LOOP,(char*)&loopback,sizeof(loopback));
	time_live=64;//设置生存时间为64，也就是最多经过64个路由器的转发
	fp=fopen("news.txt","r");

	while(!feof(fp))
void error_handling(const char* message)