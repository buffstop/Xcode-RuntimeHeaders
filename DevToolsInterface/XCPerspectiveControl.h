/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <DevToolsInterface/XCExtendedSegmentedControl.h>

@interface XCPerspectiveControl : XCExtendedSegmentedControl
{
}

+ (id)createToolbarItemForToolbar:(BOOL)arg1 usingProjectDocument:(id)arg2;
+ (void)echoStringsForDefinition:(id)arg1;
+ (id)createInstanceWithDefinition:(id)arg1 forProjectDocument:(id)arg2;
- (void)_buttonClickCallback:(id)arg1;
- (void)_activePerspectiveChanged:(id)arg1;
- (void)_choosePerspective:(id)arg1;
- (void)syncTitle;
- (void)setupForProjectDocument:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)dealloc;
- (id)init;

@end

