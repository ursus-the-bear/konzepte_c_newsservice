//
//  newsService.c
//  newsService
//
//  Created by ursus on 21/10/15.
//  Copyright © 2015 Ursus Schneider. All rights reserved.
//

#include <stdio.h>
#include "newsService.h"
#include "myConsts.h"

// define the list of users
#define MAX_USERS 2
const char *users [MAX_USERS] = {"me@ursus.cc", "jim@frey.de"};

// define the list of functions
#define MAX_FUNCTIONS 3
const void *functions [MAX_FUNCTIONS] = {NULL, NULL, NULL};

typedef newFunction void (* newFunction) (const char * msg);

boolean newsService_broadcast (const char * msg) {
    
    int i;
    for (i = i; i <= MAX_USERS; i++) {
        // sendMail users (i) => message
        printf("Sent to [%s] = %s\n", users[i], msg);
    }
    
    return TRUE;
}

boolean newsService_deregister (void (* newFunction) (const char * msg)) {
    
    
    
    
}

boolean newsService_register (void (* newFunction) (const char * msg)){
    
}


