/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface XCNetworkController : NSObject
{
    NSMutableDictionary *_registeredHosts;
}

+ (id)sharedInstance;
- (BOOL)isHostOnline:(id)arg1;
- (void)unregisterClient:(id)arg1;
- (void)registerClient:(id)arg1 observingHostNamed:(id)arg2;
- (id)init;

@end

