//
//  Smartling.h
//  Smartling
//
//  Created by Emilien Huet on 7/28/16.
//  Copyright © 2016 Smartling. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

//! Project version number for Smartling.
FOUNDATION_EXPORT double SmartlingVersionNumber;

//! Project version string for Smartling.
FOUNDATION_EXPORT const unsigned char SmartlingVersionString[];

#define SLLogging   @"logging"

typedef NS_ENUM(NSUInteger, SLLoggingLevel){
    SLLoggingNone,
    SLLoggingInfo,
    SLLoggingDebug
};


@interface Smartling : NSObject

+ (void)startWithProjectId:(NSString *)projectId andOptions:(NSDictionary *)options;
+ (NSLocale *)locale;
+ (NSString *)pluralizedStringWithKey:(NSString *)key value:(NSNumber *)value NS_FORMAT_ARGUMENT(1);

@end
