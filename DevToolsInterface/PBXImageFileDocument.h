/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/PBXFileDocument.h>

@class NSImage;

@interface PBXImageFileDocument : PBXFileDocument
{
    NSImage *_image;
}

+ (Class)defaultFileEditorSubclass;
- (void)printOperationDidRun:(id)arg1 success:(BOOL)arg2 contextInfo:(void *)arg3;
- (void)printDocument:(id)arg1;
- (id)image;
- (BOOL)writeToFile:(id)arg1 ofType:(id)arg2;
- (BOOL)readFromFile:(id)arg1 ofType:(id)arg2;
- (void)dealloc;
- (id)init;

@end

