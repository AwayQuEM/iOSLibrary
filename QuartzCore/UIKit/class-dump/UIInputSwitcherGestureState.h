//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface UIInputSwitcherGestureState : NSObject
{
    _Bool _didMoveBeyondThreshold;
    _Bool _hideSwitcher;
    double _touchDown;
    struct CGPoint _firstReferencePoint;
}

@property(nonatomic) double touchDown; // @synthesize touchDown=_touchDown;
@property(nonatomic) struct CGPoint firstReferencePoint; // @synthesize firstReferencePoint=_firstReferencePoint;
@property(nonatomic) _Bool hideSwitcher; // @synthesize hideSwitcher=_hideSwitcher;
@property(nonatomic) _Bool didMoveBeyondThreshold; // @synthesize didMoveBeyondThreshold=_didMoveBeyondThreshold;

@end

