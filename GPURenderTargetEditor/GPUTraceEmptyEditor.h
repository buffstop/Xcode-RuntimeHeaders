/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GPURenderTargetEditor/GPUTraceSubEditor.h>

@class GPUEmptyBGView, NSString, NSTextField;

// Not exported
@interface GPUTraceEmptyEditor : GPUTraceSubEditor
{
    NSString *_emptyContentString;
    NSTextField *_lozengeTextField;
    GPUEmptyBGView *_bgView;
}

- (void).cxx_destruct;
- (void)setEmptyContentString:(id)arg1;
- (void)_centerViewInSuperView:(id)arg1;
- (void)beginEditor;
- (void)loadView;

@end
