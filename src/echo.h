//
//  test.h
//  test
//
//  Created by Doron Brikman on 3/10/15.
//  Copyright (c) 2015 Doron Brikman. All rights reserved.
//

#import <Cordova/CDV.h>

@interface Echo : CDVPlugin

- (void)echo:(CDVInvokedUrlCommand*)command;

@end