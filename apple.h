#ifndef APPLE_H_SAT_DEC_17_46_12_07_2019
#define APPLE_H_SAT_DEC_17_46_12_07_2019

#ifdef __APPLE__
#define USE_OWNTIMER 1
#endif

#ifdef USE_OWNTIMER
#include "timer.h"
#else
#define Timersub timersub
#define Timeradd timeradd
#define Timercmp timercmp
#endif

#ifndef CMSG_LEN
#define	CMSG_LEN(l)		(__DARWIN_ALIGN32(sizeof(struct cmsghdr)) + (l))
#endif

#ifndef MSG_FASTOPEN
#define MSG_FASTOPEN 0
#endif

#ifndef SOL_IP
#define SOL_IP IPPROTO_IP
#endif

#ifndef INADDR_LOOPBACK
#define INADDR_LOOPBACK	((unsigned long) 0x7f000001)
#endif

/*
 * Even though Mac OS X does not support the splice implementation of		
 * Linux, define the associated flags to avoid undeclared identifier 		
 * errors.		
 */		
#ifndef SPLICE_F_MOVE		
#define SPLICE_F_MOVE           0x01		
#endif		
#ifndef SPLICE_F_NONBLOCK		
#define SPLICE_F_NONBLOCK       0x02		
#endif		
#ifndef SPLICE_F_MORE		
#define SPLICE_F_MORE           0x04		
#endif		
#ifndef SPLICE_F_GIFT		
#define SPLICE_F_GIFT           0x08		
#endif	

#endif