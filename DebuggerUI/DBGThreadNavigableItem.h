/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDEKeyDrivenNavigableItem.h"

@class NSArray, NSIndexSet;

@interface DBGThreadNavigableItem : IDEKeyDrivenNavigableItem
{
    long long _compressionValue;
    long long _maxCompressionValue;
    NSArray *_cachedChildRepresentedObjects;
    NSIndexSet *_lastCompressedIndexSet;
}

- (void).cxx_destruct;
- (BOOL)setCompressionValue:(long long)arg1 maxCompressionValue:(long long)arg2;
- (void)invalidateChildItems;
- (void)updateChildItemsForChangeKind:(unsigned long long)arg1 atIndexes:(id)arg2;
- (id)childRepresentedObjects;
- (id)image;
- (id)name;
- (void)primitiveInvalidate;
- (id)initWithRepresentedObject:(id)arg1;

@end
