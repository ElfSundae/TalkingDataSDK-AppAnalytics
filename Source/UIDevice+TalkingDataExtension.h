//
//  UIDevice+TalkingDataExtension.h
//  TalkingDataSDK-AppAnalytics
//
//  Created by Elf Sundae on 2020/05/23.
//  Copyright © 2020 https://0x123.com. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIDevice (TalkingDataExtension)

/**
 * Returns the device identifier generated by TalkingData.
 */
- (NSString *)talkingDataDeviceIdentifier;

@end

NS_ASSUME_NONNULL_END