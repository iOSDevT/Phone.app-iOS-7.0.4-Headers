/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"

@class NSString;

@protocol PHAudioPlayerDataSource <NSObject>
@optional
@property(readonly, assign) unsigned long long expectedTotalBytes;
@property(readonly, assign) unsigned long long availableBytes;
@property(readonly, assign) double duration;
@required
@property(readonly, assign) BOOL fullFileAvailable;
@property(readonly, assign) NSString* audioFilePath;
@end
