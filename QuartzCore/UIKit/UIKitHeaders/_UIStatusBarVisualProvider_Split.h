//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_UIStatusBarVisualProvider.h"

@class NSDictionary, NSLayoutConstraint, NSString, NSTimer, UILayoutGuide, _UIStatusBar, _UIStatusBarDisplayItemPlacement, _UIStatusBarStyleAttributes;

__attribute__((visibility("hidden")))
@interface _UIStatusBarVisualProvider_Split : NSObject <_UIStatusBarVisualProvider>
{
    _Bool _expanded;
    _UIStatusBar *_statusBar;
    NSDictionary *_orderedDisplayItemPlacements;
    _UIStatusBarDisplayItemPlacement *_serviceNamePlacement;
    _UIStatusBarDisplayItemPlacement *_pillIconPlacement;
    _UIStatusBarDisplayItemPlacement *_batteryChargingPlacement;
    UILayoutGuide *_cutoutLayoutGuide;
    UILayoutGuide *_mainRegionsLayoutGuide;
    NSLayoutConstraint *_leadingBottomConstraint;
    NSTimer *_pillTimer;
    NSTimer *_systemUpdatesTimer;
    NSTimer *_batteryExpansionTimer;
    NSTimer *_airplaneModeIgnoreChangesTimer;
}

+ (struct CGSize)intrinsicContentSizeForOrientation:(long long)arg1;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
@property(retain, nonatomic) NSTimer *airplaneModeIgnoreChangesTimer; // @synthesize airplaneModeIgnoreChangesTimer=_airplaneModeIgnoreChangesTimer;
@property(retain, nonatomic) NSTimer *batteryExpansionTimer; // @synthesize batteryExpansionTimer=_batteryExpansionTimer;
@property(retain, nonatomic) NSTimer *systemUpdatesTimer; // @synthesize systemUpdatesTimer=_systemUpdatesTimer;
@property(retain, nonatomic) NSTimer *pillTimer; // @synthesize pillTimer=_pillTimer;
@property(retain, nonatomic) NSLayoutConstraint *leadingBottomConstraint; // @synthesize leadingBottomConstraint=_leadingBottomConstraint;
@property(retain, nonatomic) UILayoutGuide *mainRegionsLayoutGuide; // @synthesize mainRegionsLayoutGuide=_mainRegionsLayoutGuide;
@property(retain, nonatomic) UILayoutGuide *cutoutLayoutGuide; // @synthesize cutoutLayoutGuide=_cutoutLayoutGuide;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *batteryChargingPlacement; // @synthesize batteryChargingPlacement=_batteryChargingPlacement;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *pillIconPlacement; // @synthesize pillIconPlacement=_pillIconPlacement;
@property(retain, nonatomic) _UIStatusBarDisplayItemPlacement *serviceNamePlacement; // @synthesize serviceNamePlacement=_serviceNamePlacement;
@property(retain, nonatomic) NSDictionary *orderedDisplayItemPlacements; // @synthesize orderedDisplayItemPlacements=_orderedDisplayItemPlacements;
@property(nonatomic) __weak _UIStatusBar *statusBar; // @synthesize statusBar=_statusBar;
- (void).cxx_destruct;
- (void)_applyToRegionWithIdentifiers:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)_applyToAppearingRegions:(_Bool)arg1 block:(CDUnknownBlockType)arg2;
- (id)_defaultAnimationForDisplayItemWithIdentifier:(id)arg1;
- (void)_disableSystemUpdates;
- (id)_systemUpdateAnimationForDisplayItemWithIdentifier:(id)arg1;
- (_Bool)_shouldShowSystemUpdateForDisplayItemWithIdentifier:(id)arg1;
- (void)_updateDataForSystemUpdates:(id)arg1;
- (void)_resetBattery;
- (void)_collapseBattery;
- (void)_stopBatteryCollapseTimer;
- (id)_entryKeysDelayedDuringBatteryExpansion;
- (id)_removalAnimationForBatteryCharging;
- (id)_additionAnimationForBatteryCharging;
- (struct CGAffineTransform)_expandedChargingBoltTransformForDisplayItem:(id)arg1;
- (struct CGAffineTransform)_collapseChargingBoltTransformForDisplayItem:(id)arg1;
- (void)_updateDataForBatteryCharging:(id)arg1;
- (id)_animationForAirplaneMode;
- (id)_animationForBackgroundActivityPill;
- (id)_animationForBackgroundActivityIcon;
- (void)_switchPillToTimeWithUpdate:(_Bool)arg1;
- (void)_updateBackgroundActivityWithEntry:(id)arg1 timeEntry:(id)arg2 needsUpdate:(_Bool)arg3;
- (void)_updateDataForBackgroundActivity:(id)arg1;
- (void)_updateSystemNavigationWithData:(id)arg1;
- (void)_updateDataForSystemNavigation:(id)arg1;
- (void)_updateDataForService:(id)arg1;
- (id)displayItemIdentifiersForPartWithIdentifier:(id)arg1;
- (id)regionIdentifiersForPartWithIdentifier:(id)arg1;
- (void)region:(id)arg1 highlighted:(_Bool)arg2 initialPress:(_Bool)arg3;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;
- (void)dataUpdated:(id)arg1;
- (void)styleUpdatedFromStyle:(long long)arg1;
- (void)modeUpdatedFromMode:(long long)arg1;
- (id)region:(id)arg1 willSetDisplayItems:(id)arg2;
- (id)willUpdateWithData:(id)arg1;
@property(readonly, nonatomic) _UIStatusBarStyleAttributes *styleAttributes;
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;
- (id)setupInContainerView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

