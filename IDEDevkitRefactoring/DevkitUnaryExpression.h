/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEDevkitRefactoring/DevkitExpression.h>

@interface DevkitUnaryExpression : DevkitExpression
{
    int _opKind;
}

- (BOOL)isModifyOperation;
- (id)shortDescription;
- (id)prettyPrint;
- (int)operationKind;
- (id)initWithOperation:(int)arg1;

@end
