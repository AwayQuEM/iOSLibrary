//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, UINavigationBar, _UINavigationBarItemStack, _UINavigationControllerRefreshControlHost;

__attribute__((visibility("hidden")))
@interface _UINavigationBarVisualProvider : NSObject
{
    UINavigationBar *_navigationBar;
    _UINavigationBarItemStack *_stack;
    NSDictionary *_overrides;
    _Bool _usesLegacyUI;
    _UINavigationControllerRefreshControlHost *_refreshControlHost;
}

+ (_Bool)supportsRefreshControlHosting;
@property(retain, nonatomic) _UINavigationControllerRefreshControlHost *refreshControlHost; // @synthesize refreshControlHost=_refreshControlHost;
@property(retain, nonatomic) _UINavigationBarItemStack *stack; // @synthesize stack=_stack;
@property(readonly, nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1 defaultAnswer:(CDUnknownBlockType)arg2;
- (id)preferredFocusedView;
- (_Bool)canHandleStatusBarTouchAtPoint:(struct CGPoint)arg1;
- (long long)statusBarStyle;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setBackButtonVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setupTopNavigationItem;
@property(readonly, nonatomic) _Bool wantsLargeTitleDisplayed;
- (void)recordBarSize:(struct CGSize)arg1;
- (void)updateTopNavigationItemTitleView;
- (void)updateTopNavigationItemAnimated:(_Bool)arg1;
- (void)animateForSearchPresentation:(_Bool)arg1;
- (void)popAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)pushAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareForPop;
- (void)prepareForPush;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (void)barSizeChanged;
- (_Bool)shouldUseHeightRangeFittingWidth;
- (CDStruct_c3b9c2ee)heightRangeFittingWidth:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)invalidateIntrinsicContentSize;
- (struct CGSize)intrinsicContentSize;
- (void)safeAreaInsetsDidChange;
@property(readonly, nonatomic) long long currentContentSize;
- (void)updateArchivedSubviews:(id)arg1;
- (void)provideViewsForContents:(id)arg1 topItem:(id)arg2 backItem:(id)arg3;
- (void)_updateTitleViewForOpacityChange;
- (void)_updateBackground;
- (void)changeLayout;
- (void)changeAppearance;
- (void)stackDidChangeFrom:(id)arg1;
- (void)teardown;
- (void)prepare;
- (id)initWithNavigationBar:(id)arg1;
- (void)_shim_30244716;
- (void)_shim_updateBackgroundViewIgnoringFlag;
- (_Bool)_shim_throwConstraintExceptions;
- (void)_shim_popForCarplayPressAtFakePoint:(struct CGPoint)arg1;
- (void)_shim_touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_shim_touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)_shim_touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)_shim_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)_shim_wantsCustomTouchHandlingForTouches:(id)arg1;
- (id)_shim_customHitTest:(struct CGPoint)arg1 forView:(id)arg2;
- (void)_shim_pressBackIndicator:(_Bool)arg1 initialPress:(_Bool)arg2;
- (id)_shim_backIndicatorView;
- (void)_shim_updateBackIndicator;
- (void)_shim_setPromptText:(id)arg1 animated:(_Bool)arg2;
- (id)_shim_promptText;
- (void)_shim_updateUserContentGuideForTopItem:(id)arg1 backItem:(id)arg2;
- (id)_shim_userContentGuide;
- (long long)_shim_backdropStyle;
- (double)_shim_backgroundHeight;
- (void)_shim_setDisableBlurTinting:(_Bool)arg1;
- (_Bool)_shim_disableBlurTinting;
- (void)_shim_setBackdropGroupName:(id)arg1;
- (id)_shim_backdropGroupName;
- (void)_shim_updateBackdropView;
- (void)_shim_setShadowAlpha:(double)arg1;
- (double)_shim_shadowAlpha;
- (id)_shim_compatibilityBackgroundView;
- (void)_shim_setCustomBackgroundView:(id)arg1;
- (void)_shim_setUseContentView:(_Bool)arg1;
- (id)_shim_displayViewsIncludingHiddenBackButtonViews:(_Bool)arg1;
- (id)_shim_layoutView;
- (id)_shim_contentView;
- (id)_accessibility_controlToActivateForHUDGestureLiftAtPoint:(struct CGPoint)arg1;
- (id)_accessibility_HUDItemForPoint:(struct CGPoint)arg1;

@end

