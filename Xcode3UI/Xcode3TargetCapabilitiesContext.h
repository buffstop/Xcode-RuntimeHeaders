/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"
#import "IDECapabilitiesContextProviding-Protocol.h"
#import "IDECodesigningInfoDelegate-Protocol.h"
#import "IDEPortalInfoDelegate-Protocol.h"

@class DVTDeveloperAccount, DVTStackBacktrace, DVTTeamRecord, NSArray, NSMutableArray, NSMutableDictionary, NSString, Xcode3Target, Xcode3TargetBuildSettingsCoordinator, Xcode3TargetEntitlementsCoordinator, Xcode3TargetInfoPlistCoordinator, Xcode3TargetLinkedFrameworksCoordinator, Xcode3TargetPortalEntitlementsCoordinator;

@interface Xcode3TargetCapabilitiesContext : NSObject <DVTInvalidation, IDECapabilitiesContextProviding, IDEPortalInfoDelegate, IDECodesigningInfoDelegate>
{
    Xcode3TargetEntitlementsCoordinator *_entitlementsCoordinator;
    Xcode3TargetInfoPlistCoordinator *_infoPlistCoordinator;
    Xcode3TargetBuildSettingsCoordinator *_buildSettingsCoordinator;
    Xcode3TargetPortalEntitlementsCoordinator *_portalEntitlementsCoordinator;
    Xcode3TargetLinkedFrameworksCoordinator *_linkedFrameworksCoordinator;
    NSMutableArray *_changeNotificationTokens;
    NSMutableDictionary *_capabilityModelsByItemIdentifier;
    NSArray *_capabilityItemModels;
    Xcode3Target *_target;
}

+ (id)_projectItemExtensionsForPlatform:(id)arg1;
+ (id)_projectItemExtensions;
+ (void)initialize;
@property(readonly) Xcode3Target *target; // @synthesize target=_target;
- (void).cxx_destruct;
- (void)_runFlightChecksForModel:(id)arg1;
- (void)_coordinatorChanged:(id)arg1;
- (id)_coordinatorForNotification:(id)arg1;
- (id)_flightCheckFromModel:(id)arg1 forCoordinator:(id)arg2;
- (id)_applicableItems;
- (void)_syncPBXTarget;
@property(readonly) NSString *provisioningProfileUUID;
@property(readonly) NSString *codesignIdentity;
- (void)useTeamBasedSigningWithTeam:(id)arg1 account:(id)arg2;
@property(readonly) BOOL isUsingTeamBasedSigning;
@property(readonly, nonatomic) NSString *portalPlatform;
@property(retain, nonatomic) DVTDeveloperAccount *selectedAccount;
@property(retain, nonatomic) DVTTeamRecord *selectedTeamRecord;
@property(readonly, getter=isInternal) BOOL internal;
@property(readonly) NSArray *explicitlyEnabledAppIDFeatures;
- (id)appIDFeatureStateBasedOnCapabilitiesAndEntitlements;
- (id)appIDFeatureStateBasedOnCapabilities;
- (id)_appIDFeatureStateIncludingEntitlements:(BOOL)arg1;
@property(readonly) NSArray *enabledAppIDFeatures;
@property(readonly) NSString *targetBundleIdentifier;
@property(readonly) NSString *platformIdentifier;
@property(readonly) NSArray *capabilityItemModels; // @synthesize capabilityItemModels=_capabilityItemModels;
@property(readonly) Xcode3TargetPortalEntitlementsCoordinator *portalEntitlementsCoordinator;
@property(readonly) Xcode3TargetLinkedFrameworksCoordinator *linkedFrameworksCoordinator;
@property(readonly) Xcode3TargetBuildSettingsCoordinator *buildSettingsCoordinator;
@property(readonly) Xcode3TargetInfoPlistCoordinator *infoPlistCoordinator;
@property(readonly) Xcode3TargetEntitlementsCoordinator *entitlementsCoordinator;
@property(readonly) id <IDEBlueprint> blueprint;
- (void)setEnabled:(BOOL)arg1 forCapabilityItemModel:(id)arg2;
- (BOOL)isCapabilityItemEnabled:(id)arg1 allowEducatedGuess:(BOOL)arg2;
- (BOOL)isCapabilityItemModelEnabled:(id)arg1;
- (id)targetAttributesIdentifierForItemIdentifier:(id)arg1;
- (id)modelWithItemIdentifier:(id)arg1;
- (void)primitiveInvalidate;
- (void)targetWillBeRemoved:(id)arg1;
- (void)invalidateCoordinators;
- (id)initWithTarget:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

