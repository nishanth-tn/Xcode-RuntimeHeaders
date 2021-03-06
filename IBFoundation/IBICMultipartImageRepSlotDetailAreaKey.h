/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@interface IBICMultipartImageRepSlotDetailAreaKey : NSObject <NSCopying>
{
    Class _slotClass;
    id <IBICDetailAreaKeySection> _section;
    id <IBICDetailAreaKeyGroup> _group;
}

+ (id)keyWithSlotClass:(Class)arg1 section:(id)arg2 group:(id)arg3;
+ (id)keyWithSlotClass:(Class)arg1 sectionComponents:(id)arg2 groupComponents:(id)arg3;
@property(readonly) id <IBICDetailAreaKeyGroup> group; // @synthesize group=_group;
@property(readonly) id <IBICDetailAreaKeySection> section; // @synthesize section=_section;
@property(readonly) Class slotClass; // @synthesize slotClass=_slotClass;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDetailAreaKey:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSlotClass:(Class)arg1 section:(id)arg2 group:(id)arg3;

@end

