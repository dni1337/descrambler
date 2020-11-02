#ifndef _DVBCA_PID_H_
#define _DVBCA_PID_H_

struct ca_pid {
	unsigned int pid;
	int index;		/* -1 == disable*/
};

#define CA_SET_PID        _IOW('o', 135, struct ca_pid)
 
typedef struct ca_pid ca_pid_t;

#endif

