//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSLayoutItem.h"

@class NSISEngine, NSISVariable, NSLayoutDimension, NSLayoutXAxisAnchor, NSLayoutYAxisAnchor, NSMutableSet, NSObservation;

@protocol _UILayoutItem <NSLayoutItem>
@property(readonly, nonatomic) NSLayoutYAxisAnchor *centerYAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *centerXAnchor;
@property(readonly, nonatomic) NSLayoutDimension *heightAnchor;
@property(readonly, nonatomic) NSLayoutDimension *widthAnchor;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *bottomAnchor;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *topAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *rightAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *leftAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *trailingAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *leadingAnchor;
- (_Bool)_uili_isFocusGuide;
- (NSISVariable *)_boundsHeightVariable;
- (NSISVariable *)_boundsWidthVariable;
- (NSISVariable *)_minYVariable;
- (NSISVariable *)_minXVariable;
- (NSISEngine *)_uili_observableLayoutEngineForBaseFrameVariables:(_Bool)arg1;
- (_Bool)_uili_requiresObservationForVariable:(NSISVariable *)arg1;
- (void)_uili_removeLayoutVariableObservationsOnlyToSupportTAMICChange:(_Bool)arg1;
- (void)_uili_stashLayoutVariableObservation:(NSObservation *)arg1 forVariable:(NSISVariable *)arg2;
- (NSMutableSet *)_uili_existingBaseFrameVariables;
- (NSMutableSet *)_uili_existingLayoutVariables;
- (NSISVariable *)nsli_heightVariable;
- (NSISVariable *)nsli_boundsHeightVariable;
- (NSISVariable *)nsli_widthVariable;
- (NSISVariable *)nsli_boundsWidthVariable;
- (NSISVariable *)nsli_minYVariable;
- (NSISVariable *)nsli_minXVariable;
- (void *)_referenceView;

@optional
- (NSISVariable *)_contentHeightVariable;
- (NSISVariable *)_contentWidthVariable;
- (NSISVariable *)nsli_contentHeightVariable;
- (NSISVariable *)nsli_contentWidthVariable;
@end

