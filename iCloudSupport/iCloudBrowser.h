/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSNetServiceBrowserDelegate-Protocol.h"

@class NSMutableSet, NSNetServiceBrowser, NSSet, NSString;

@interface iCloudBrowser : NSObject <NSNetServiceBrowserDelegate>
{
    NSString *_domain;
    NSString *_type;
    id <iCloudBrowserDelegate> _delegate;
    NSMutableSet *_servicesMutable;
    NSMutableSet *_runLoopModesMutable;
    NSNetServiceBrowser *_netBrowser;
    NSMutableSet *_pendingServicesToAdd;
    NSMutableSet *_pendingServicesToRemove;
}

+ (id)keyPathsForValuesAffectingIsStarted;
@property(readonly, nonatomic) NSMutableSet *pendingServicesToRemove; // @synthesize pendingServicesToRemove=_pendingServicesToRemove;
@property(readonly, nonatomic) NSMutableSet *pendingServicesToAdd; // @synthesize pendingServicesToAdd=_pendingServicesToAdd;
@property(retain, nonatomic) NSNetServiceBrowser *netBrowser; // @synthesize netBrowser=_netBrowser;
@property(readonly, nonatomic) NSMutableSet *runLoopModesMutable; // @synthesize runLoopModesMutable=_runLoopModesMutable;
@property(readonly, nonatomic) NSMutableSet *servicesMutable; // @synthesize servicesMutable=_servicesMutable;
@property(nonatomic) id <iCloudBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (void)stopWithError:(id)arg1;
- (void)stop;
- (void)start;
@property(readonly, nonatomic) NSSet *runLoopModes;
- (void)removeRunLoopMode:(id)arg1;
- (void)addRunLoopMode:(id)arg1;
@property(readonly, nonatomic) NSSet *services;
@property(readonly, nonatomic) BOOL isStarted;
- (void)dealloc;
- (id)initWithDomain:(id)arg1 type:(id)arg2;

@end
