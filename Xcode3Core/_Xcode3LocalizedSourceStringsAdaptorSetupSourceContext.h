/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDELocalizationWorkContext.h"

#import "IDELocalizationDataShellTaskConfiguration-Protocol.h"

@class NSArray, NSString;

@interface _Xcode3LocalizedSourceStringsAdaptorSetupSourceContext : IDELocalizationWorkContext <IDELocalizationDataShellTaskConfiguration>
{
    NSArray *_sourcePaths;
    NSString *_tempPath;
    NSString *_IDELocalizationDataConfiguration_command;
    NSArray *_readTableContexts;
}

@property(retain) NSArray *readTableContexts; // @synthesize readTableContexts=_readTableContexts;
@property(retain) NSString *IDELocalizationDataConfiguration_command; // @synthesize IDELocalizationDataConfiguration_command=_IDELocalizationDataConfiguration_command;
@property(retain) NSString *tempPath; // @synthesize tempPath=_tempPath;
@property(retain) NSArray *sourcePaths; // @synthesize sourcePaths=_sourcePaths;
- (void).cxx_destruct;
- (void)primitiveInvalidate;

@end
