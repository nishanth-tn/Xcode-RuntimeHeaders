/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface DockUtilities : NSObject
{
    void *_contents;
    unsigned int _installerPort;
    int _tid;
    BOOL _transactionStarted;
}

+ (id)sharedInstance;
- (BOOL)modifyDockForPath:(id)arg1 operationType:(int)arg2 relativeTo:(id)arg3;
- (BOOL)dockContainsIconForAppPath:(id)arg1;
- (int)_itemIndexForPath:(id)arg1;
- (void)_loadItems;
- (BOOL)_endTransaction;
- (BOOL)_startTransaction;
- (id)_init;
- (id)init;

@end

