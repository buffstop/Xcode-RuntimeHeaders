/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsCore/PBXCCScope.h>

@class PBXMemberContainerSymbol;

@interface PBXCCMethodScope : PBXCCScope
{
    PBXMemberContainerSymbol *_containerSymbol;
    BOOL _isInstance;
}

+ (id)methodScopeWithSymbol:(id)arg1 isInstanceMethod:(BOOL)arg2;
- (void)addSymbolsToArray:(id)arg1;
- (id)getSymbolWithName:(id)arg1;
- (void)addSymbol:(id)arg1;
- (id)containerSymbol;
- (BOOL)isInstance;
- (id)description;
- (void)dealloc;
- (id)initWithSymbol:(id)arg1 isInstanceMethod:(BOOL)arg2;

@end

