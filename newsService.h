//
//  newsService.h
//  newsService
//
//  Created by ursus on 21/10/15.
//  Copyright © 2015 Ursus Schneider. All rights reserved.
//

#include "myConsts.h"

#ifndef newsService_h
#define newsService_h

boolean newsService_deregister (void (* newMessage) (const char * msg));
boolean newsService_register (void (* newMessage) (const char * msg));
boolean newsService_broadcast (const char * msg);

#endif /* newsService_h */
