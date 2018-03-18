//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIDragItem.h>

@class NSItemProvider, _UIDropSessionImpl;

__attribute__((visibility("hidden")))
@interface _UIDropItem : UIDragItem
{
    NSItemProvider *_dropItemProvider;
    _UIDropSessionImpl *__dropSession;
}

@property(nonatomic) __weak _UIDropSessionImpl *_dropSession; // @synthesize _dropSession=__dropSession;
@property(retain, nonatomic, getter=_dropItemProvider, setter=_setDropItemProvider:) NSItemProvider *dropItemProvider; // @synthesize dropItemProvider=_dropItemProvider;
- (void).cxx_destruct;
- (struct CGSize)_visibleDropItemSize;
- (void)_didSetPreferredPreviewProvider;
- (id)_draggingItem;
@property(nonatomic, getter=_visualTarget, setter=_setVisualTarget:) __weak id <_UIDraggingItemVisualTarget> _visualTarget;
- (id)_privateLocalContext;
- (id)localObject;
- (id)itemProvider;
- (id)_initWithInternalDraggingItem:(id)arg1;
- (id)initWithItemProvider:(id)arg1;

@end
