//
//  request.h
//  pushim
//
//  Created by 易国磐 on 15-1-26.
//  Copyright (c) 2015年 易国磐. All rights reserved.
//

#ifndef __pushim__request__
#define __pushim__request__

#include <stdio.h>

typedef struct request
{
    char *body;
    size_t blen;
} request_t;

#endif /* defined(__pushim__request__) */
