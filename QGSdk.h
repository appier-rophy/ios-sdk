//
//  QGSdk.h
//  QGSdk
//
//  Created by IKSHWAKU on 24/06/15.
//  Copyright (c) 2015 IKSHWAKU. All rights reserved.

#import <Foundation/Foundation.h>

@interface QGSdk : NSObject {
    NSString *_appId;
    NSString *_token;
}

@property NSString *appId;
+ (QGSdk *) getSharedInstance;
- (void)setToken:(NSData *)tokenData;
- (void)onStop;
- (void)onStart:(NSString *)appId;
- (void)setUserId:(NSString *)userId;
- (void)setName:(NSString *)name;
- (void)setFirstName:(NSString *)name;
- (void)setLastName:(NSString *)name;
- (void)setCity:(NSString *)city;
- (void)setEmail:(NSString *)email;
- (void)setDayOfBirth:(NSNumber *)day;
- (void)setMonthOfBirth:(NSNumber *)month;
- (void)setYearOfBirth:(NSNumber *)year;
//- (void)setCustomUser:(NSString *)key Parameter:(id)value;
//- (void)logEvent:(NSString *)name Info:(NSDictionary *)info;
- (void)setCustomKey:(NSString *)key withValue:(id)value;
- (void)logEvent:(NSString *)name withParameters:(NSDictionary *)parameters;

- (void)storeNotification:(NSDictionary *) info;
@end
