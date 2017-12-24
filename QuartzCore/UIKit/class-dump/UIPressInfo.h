//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface UIPressInfo : NSObject
{
    _Bool _longClick;
    double _timestamp;
    long long _phase;
    long long _type;
    unsigned long long _source;
    unsigned long long _gameControllerComponent;
    double _force;
    unsigned long long _clickCount;
}

@property(nonatomic, getter=isLongClick) _Bool longClick; // @synthesize longClick=_longClick;
@property(nonatomic) unsigned long long clickCount; // @synthesize clickCount=_clickCount;
@property(nonatomic) double force; // @synthesize force=_force;
@property(nonatomic) unsigned long long gameControllerComponent; // @synthesize gameControllerComponent=_gameControllerComponent;
@property(nonatomic) unsigned long long source; // @synthesize source=_source;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long phase; // @synthesize phase=_phase;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (id)_sourceDescription;
- (id)description;
- (id)init;

@end

