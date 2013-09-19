/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "XCEDataNodeAdapterP-Protocol.h"

@class NSString, XCElementObjectUnit, XCElementViewController;

@interface TestGlassOutlineNodeAdapter : NSObject <XCEDataNodeAdapterP>
{
    XCElementViewController *_objectViewController;
    XCElementObjectUnit *_objectUnit;
    NSString *_message;
}

+ (id)messageViewControllerFor:(id)arg1;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void)dealloc;
- (id)dataNode:(id)arg1 objectValueForTableColumn:(id)arg2;
- (void)displayObjectInfoFor:(id)arg1 withinFace:(id)arg2;
- (id)inspectorViewControllersForDataNode:(id)arg1 editor:(id)arg2;
- (id)editorViewControllerForDataNode:(id)arg1;
- (BOOL)dataNode:(id)arg1 shouldEditTableColumn:(id)arg2;

@end
