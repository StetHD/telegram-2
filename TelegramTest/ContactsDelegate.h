//
//  ContactsDelegate.h
//  TelegramTest
//
//  Created by Dmitry Kondratyev on 10/27/13.
//  Copyright (c) 2013 keepcoder. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol ContactsDelegate <NSObject>

-(void)didChangeContent:(id)contacts;

@end
