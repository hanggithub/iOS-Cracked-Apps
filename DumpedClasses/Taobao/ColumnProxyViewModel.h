//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseProxyViewModel.h"

@interface ColumnProxyViewModel : BaseProxyViewModel
{
    long long _columnNum;
}

@property(nonatomic) long long columnNum; // @synthesize columnNum=_columnNum;
- (void)bind:(id)arg1 indexPath:(id)arg2 keys:(id)arg3 keysMap:(id)arg4;
- (id)data:(id)arg1 key:(id)arg2;
- (long long)itemCount:(long long)arg1;
- (id)initWithViewModel:(id)arg1 columnNum:(long long)arg2;
- (id)initWithViewModel:(id)arg1;

@end
