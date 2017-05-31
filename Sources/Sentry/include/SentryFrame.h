//
//  SentryFrame.h
//  Sentry
//
//  Created by Daniel Griesser on 05/05/2017.
//  Copyright © 2017 Sentry. All rights reserved.
//

#import <Foundation/Foundation.h>

#if __has_include(<Sentry/Sentry.h>)

#import <Sentry/SentrySerializable.h>

#else
#import "SentrySerializable.h"
#endif

NS_ASSUME_NONNULL_BEGIN

NS_SWIFT_NAME(Frame)
@interface SentryFrame : NSObject <SentrySerializable>

- (instancetype)init;
+ (instancetype)new;

@property(nonatomic, copy) NSString *_Nullable symbolAddress;
@property(nonatomic, copy) NSString *_Nullable fileName;
@property(nonatomic, copy) NSString *_Nullable function;
@property(nonatomic, copy) NSString *_Nullable module;
@property(nonatomic, copy) NSString *_Nullable package;
@property(nonatomic, copy) NSString *_Nullable imageAddress;
@property(nonatomic, copy) NSString *_Nullable platform;
@property(nonatomic, copy) NSString *_Nullable instructionAddress;
@property(nonatomic, copy) NSNumber *_Nullable lineNumber;
@property(nonatomic, copy) NSNumber *_Nullable columnNumber;

@end

NS_ASSUME_NONNULL_END
