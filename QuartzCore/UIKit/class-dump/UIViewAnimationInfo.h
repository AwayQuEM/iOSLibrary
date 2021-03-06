//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface UIViewAnimationInfo : NSObject
{
    NSMutableDictionary *_animatablePropertyStates;
    NSMutableDictionary *_presentationModifiers;
    NSMutableDictionary *_modifierGroupRequestHandlers;
    NSMutableDictionary *_isPartOfHigherOrderProperty;
    NSObject<OS_dispatch_queue> *_lockingQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *lockingQueue; // @synthesize lockingQueue=_lockingQueue;
@property(retain, nonatomic) NSMutableDictionary *isPartOfHigherOrderProperty; // @synthesize isPartOfHigherOrderProperty=_isPartOfHigherOrderProperty;
@property(retain, nonatomic) NSMutableDictionary *modifierGroupRequestHandlers; // @synthesize modifierGroupRequestHandlers=_modifierGroupRequestHandlers;
@property(retain, nonatomic) NSMutableDictionary *presentationModifiers; // @synthesize presentationModifiers=_presentationModifiers;
@property(retain, nonatomic) NSMutableDictionary *animatablePropertyStates; // @synthesize animatablePropertyStates=_animatablePropertyStates;
- (void).cxx_destruct;
- (void)performWithLock:(CDUnknownBlockType)arg1;
- (void)setModifierGroupRequestHandler:(id)arg1 forKey:(id)arg2;
- (id)modifierGroupRequestHandlerForKey:(id)arg1;
- (void)setPresentationModifier:(id)arg1 forKey:(id)arg2;
- (id)presentationModifierForKey:(id)arg1;
- (void)setAnimatablePropertyState:(id)arg1 forKey:(id)arg2;
- (id)existingAnimatablePropertyStateForKey:(id)arg1;
- (id)animatablePropertyStateForKey:(id)arg1;
- (id)animatablePropertyStateKeys;
- (id)init;

@end

