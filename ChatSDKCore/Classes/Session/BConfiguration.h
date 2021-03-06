//
//  BConfiguration.h
//  AFNetworking
//
//  Created by Ben on 11/7/17.
//

#import <Foundation/Foundation.h>

@interface BConfiguration : NSObject

@property (nonatomic, readwrite) NSString * messageColorMe;
@property (nonatomic, readwrite) NSString * messageColorReply;
@property (nonatomic, readwrite) NSString * rootPath;
@property (nonatomic, readwrite) BOOL appBadgeEnabled;
@property (nonatomic, readwrite) NSString * defaultUserName;
@property (nonatomic, readwrite) NSString * defaultUserNamePrefix;
@property (nonatomic, readwrite) BOOL showEmptyChats;

+(BConfiguration *) configuration;

@end
