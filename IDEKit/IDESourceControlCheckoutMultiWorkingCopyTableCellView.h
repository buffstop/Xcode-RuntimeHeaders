/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSTableCellView.h"

@class NSImageView, NSPopUpButton, NSTextField;

@interface IDESourceControlCheckoutMultiWorkingCopyTableCellView : NSTableCellView
{
    NSTextField *_subtitleTextField;
    NSTextField *_urlField;
    NSPopUpButton *_branchPopUp;
    NSImageView *_unreachableImage;
}

@property NSImageView *unreachableImage; // @synthesize unreachableImage=_unreachableImage;
@property NSPopUpButton *branchPopUp; // @synthesize branchPopUp=_branchPopUp;
@property NSTextField *urlField; // @synthesize urlField=_urlField;
- (void).cxx_destruct;
- (void)setBackgroundStyle:(long long)arg1;

@end

