//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "TBase.h"

@class NSString;

@interface PhantomClipRect : NSObject <TBase, NSCoding>
{
    short __top;
    short __left;
    short __height;
    short __width;
    BOOL __top_isset;
    BOOL __left_isset;
    BOOL __height_isset;
    BOOL __width_isset;
}

@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetWidth;
- (BOOL)widthIsSet;
@property(nonatomic, getter=width, setter=setWidth:) short width;
- (void)unsetHeight;
- (BOOL)heightIsSet;
@property(nonatomic, getter=height, setter=setHeight:) short height;
- (void)unsetLeft;
- (BOOL)leftIsSet;
@property(nonatomic, getter=left, setter=setLeft:) short left;
- (void)unsetTop;
- (BOOL)topIsSet;
@property(nonatomic, getter=top, setter=setTop:) short top;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTop:(short)arg1 left:(short)arg2 height:(short)arg3 width:(short)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

