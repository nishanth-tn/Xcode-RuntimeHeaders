/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTLocalProcessInformation.h"

@class NSImage;

@interface DVTLocalProcessInformation (DVTLocalProcessInformationAdditions)
+ (id)imageForNonUIExecutable;
+ (id)applicationImageForPID:(int)arg1;
@property(readonly) BOOL isApplication;
@property(readonly) NSImage *applicationImage;
@end

