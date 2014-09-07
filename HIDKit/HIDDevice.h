//
//  HIDDevice.h
//  HIDKit
//
//  Created by Robert Luis Hoover on 9/6/14.
//  Copyright (c) 2014 ars draconis. All rights reserved.
//

#import <Foundation/Foundation.h>
@import IOKit.hid;

@interface HIDDevice : NSObject

@property io_service_t service;

- (instancetype)initWithDeviceRef:(IOHIDDeviceRef)deviceRef;

@end
