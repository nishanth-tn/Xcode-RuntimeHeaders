/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCParsing/Expression.h>

@class DeclSet;

@interface CastExpression : Expression
{
    DeclSet *_castTypeDeclSet;
}

- (void)setCastTypeDeclSet:(id)arg1;
- (id)castTypeDeclSet;
- (id)shortDescription;
- (id)prettyPrint;
- (void)dealloc;
- (id)init;

@end

