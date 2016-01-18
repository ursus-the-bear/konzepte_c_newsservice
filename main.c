//
//  main.c
//  newsService
//
//  Created by ursus on 21/10/15.
//  Copyright © 2015 Ursus Schneider. All rights reserved.
//

#include <stdio.h>

void f1 (const char * message);
void f2 (const char * message);



int main(int argc, const char * argv[]) {

    newsService_register (f1);
    newsService_register (f2);
    
    newsService_broadcast ("xyz");




}
