//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RLMCArrayHolder : NSObject
{
    struct unique_ptr<id [], std::__1::default_delete<id []>> array;
    unsigned int size;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)resize:(unsigned int)arg1;
- (id)initWithSize:(unsigned int)arg1;

@end

