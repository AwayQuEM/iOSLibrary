//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

@interface _UIRootWindow : UIWindow
{
    double _scale;
}

- (void)_noteScreenDidChangeMode:(id)arg1;
- (void)setScreen:(id)arg1;
- (void)_configureRootLayer:(id)arg1 transformLayer:(id)arg2;
- (_Bool)_transformLayerIncludesScreenRotation;
- (void)_configureContextOptions:(id)arg1;
- (CDStruct_3cbf53c3)_bindingDescription;
- (_Bool)_touchesInsideShouldHideCalloutBar;
- (_Bool)_isConstrainedByScreenJail;
- (_Bool)_isWindowServerHostingManaged;
- (_Bool)_wantsSceneAssociation;
- (id)_context;
- (void)dealloc;
- (id)initWithScreen:(id)arg1;
- (id)initWithDisplay:(id)arg1;

@end

