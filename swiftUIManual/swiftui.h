
import Accessibility
import AppKit
import Combine
import CoreData
import CoreFoundation
import CoreGraphics
import CoreTransferable
import Darwin
import DeveloperToolsSupport
import Foundation
import UniformTypeIdentifiers
import _Concurrency
import _StringProcessing
import os
import os.log
import os.signpost

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
public protocol AXChartDescriptorRepresentable {

    func makeChartDescriptor() -> AXChartDescriptor

    func updateChartDescriptor(_ descriptor: AXChartDescriptor)
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension AXChartDescriptorRepresentable {

    public func updateChartDescriptor(_ descriptor: AXChartDescriptor)
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public struct AccessibilityActionKind : Equatable {

    public static let `default`: AccessibilityActionKind

    public static let escape: AccessibilityActionKind

    @available(macOS 10.15, *)
    @available(iOS, unavailable)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public static let delete: AccessibilityActionKind

    @available(macOS 10.15, *)
    @available(iOS, unavailable)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public static let showMenu: AccessibilityActionKind

    public init(named name: Text)

    public static func == (a: AccessibilityActionKind, b: AccessibilityActionKind) -> Bool
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public enum AccessibilityAdjustmentDirection {

    case increment

    case decrement

    public static func == (a: AccessibilityAdjustmentDirection, b: AccessibilityAdjustmentDirection) -> Bool

    public func hash(into hasher: inout Hasher)

    public var hashValue: Int { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension AccessibilityAdjustmentDirection : Equatable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension AccessibilityAdjustmentDirection : Hashable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public struct AccessibilityAttachmentModifier : ViewModifier {

    public typealias Body = Never
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public struct AccessibilityChildBehavior : Hashable {

    public func hash(into hasher: inout Hasher)

    public static func == (lhs: AccessibilityChildBehavior, rhs: AccessibilityChildBehavior) -> Bool

    public var hashValue: Int { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension AccessibilityChildBehavior {

    public static let ignore: AccessibilityChildBehavior

    public static let contain: AccessibilityChildBehavior

    public static let combine: AccessibilityChildBehavior
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
public struct AccessibilityCustomContentKey {

    public init(_ label: Text, id: String)

    public init(_ labelKey: LocalizedStringKey, id: String)

    public init(_ labelKey: LocalizedStringKey)
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension AccessibilityCustomContentKey : Equatable {

    public static func == (a: AccessibilityCustomContentKey, b: AccessibilityCustomContentKey) -> Bool
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
@propertyWrapper @frozen public struct AccessibilityFocusState<Value> : DynamicProperty where Value : Hashable {

    @propertyWrapper @frozen public struct Binding {

            public var wrappedValue: Value { get nonmutating set }

            public var projectedValue: AccessibilityFocusState<Value>.Binding { get }
    }

    public var wrappedValue: Value { get nonmutating set }

    public var projectedValue: AccessibilityFocusState<Value>.Binding { get }

    public init() where Value == Bool

    public init(for technologies: AccessibilityTechnologies) where Value == Bool

    public init<T>() where Value == T?, T : Hashable

    public init<T>(for technologies: AccessibilityTechnologies) where Value == T?, T : Hashable
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
@frozen public enum AccessibilityHeadingLevel : UInt {

    case unspecified

    case h1

    case h2

    case h3

    case h4

    case h5

    case h6

    public init?(rawValue: UInt)

    public typealias RawValue = UInt

    public var rawValue: UInt { get }
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension AccessibilityHeadingLevel : Equatable {
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension AccessibilityHeadingLevel : Hashable {
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension AccessibilityHeadingLevel : RawRepresentable {
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension AccessibilityHeadingLevel : Sendable {
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
@frozen public enum AccessibilityLabeledPairRole {

    case label

    case content

    public static func == (a: AccessibilityLabeledPairRole, b: AccessibilityLabeledPairRole) -> Bool
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension AccessibilityLabeledPairRole : Hashable {

    public func hash(into hasher: inout Hasher)

    public var hashValue: Int { get }
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension AccessibilityLabeledPairRole : Sendable {
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public protocol AccessibilityQuickActionStyle {
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
public protocol AccessibilityRotorContent {

    associatedtype Body : AccessibilityRotorContent

    @AccessibilityRotorContentBuilder var body: Self.Body { get }
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
@resultBuilder public struct AccessibilityRotorContentBuilder {

    public static func buildBlock<Content>(_ content: Content) -> some AccessibilityRotorContent where Content : AccessibilityRotorContent


    public static func buildIf<Content>(_ content: Content?) -> some AccessibilityRotorContent where Content : AccessibilityRotorContent

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension AccessibilityRotorContentBuilder {

    public static func buildBlock<C0, C1>(_ c0: C0, _ c1: C1) -> some AccessibilityRotorContent where C0 : AccessibilityRotorContent, C1 : AccessibilityRotorContent

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension AccessibilityRotorContentBuilder {

    public static func buildBlock<C0, C1, C2>(_ c0: C0, _ c1: C1, _ c2: C2) -> some AccessibilityRotorContent where C0 : AccessibilityRotorContent, C1 : AccessibilityRotorContent, C2 : AccessibilityRotorContent

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension AccessibilityRotorContentBuilder {

    public static func buildBlock<C0, C1, C2, C3>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3) -> some AccessibilityRotorContent where C0 : AccessibilityRotorContent, C1 : AccessibilityRotorContent, C2 : AccessibilityRotorContent, C3 : AccessibilityRotorContent

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension AccessibilityRotorContentBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4) -> some AccessibilityRotorContent where C0 : AccessibilityRotorContent, C1 : AccessibilityRotorContent, C2 : AccessibilityRotorContent, C3 : AccessibilityRotorContent, C4 : AccessibilityRotorContent

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension AccessibilityRotorContentBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5) -> some AccessibilityRotorContent where C0 : AccessibilityRotorContent, C1 : AccessibilityRotorContent, C2 : AccessibilityRotorContent, C3 : AccessibilityRotorContent, C4 : AccessibilityRotorContent, C5 : AccessibilityRotorContent

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension AccessibilityRotorContentBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6) -> some AccessibilityRotorContent where C0 : AccessibilityRotorContent, C1 : AccessibilityRotorContent, C2 : AccessibilityRotorContent, C3 : AccessibilityRotorContent, C4 : AccessibilityRotorContent, C5 : AccessibilityRotorContent, C6 : AccessibilityRotorContent

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension AccessibilityRotorContentBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6, C7>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6, _ c7: C7) -> some AccessibilityRotorContent where C0 : AccessibilityRotorContent, C1 : AccessibilityRotorContent, C2 : AccessibilityRotorContent, C3 : AccessibilityRotorContent, C4 : AccessibilityRotorContent, C5 : AccessibilityRotorContent, C6 : AccessibilityRotorContent, C7 : AccessibilityRotorContent

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension AccessibilityRotorContentBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6, C7, C8>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6, _ c7: C7, _ c8: C8) -> some AccessibilityRotorContent where C0 : AccessibilityRotorContent, C1 : AccessibilityRotorContent, C2 : AccessibilityRotorContent, C3 : AccessibilityRotorContent, C4 : AccessibilityRotorContent, C5 : AccessibilityRotorContent, C6 : AccessibilityRotorContent, C7 : AccessibilityRotorContent, C8 : AccessibilityRotorContent

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension AccessibilityRotorContentBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6, C7, C8, C9>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6, _ c7: C7, _ c8: C8, _ c9: C9) -> some AccessibilityRotorContent where C0 : AccessibilityRotorContent, C1 : AccessibilityRotorContent, C2 : AccessibilityRotorContent, C3 : AccessibilityRotorContent, C4 : AccessibilityRotorContent, C5 : AccessibilityRotorContent, C6 : AccessibilityRotorContent, C7 : AccessibilityRotorContent, C8 : AccessibilityRotorContent, C9 : AccessibilityRotorContent

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
public struct AccessibilityRotorEntry<ID> where ID : Hashable {

    public init(_ label: Text, id: ID, textRange: Range<String.Index>? = nil, prepare: @escaping (() -> Void) = {})

    public init(_ label: Text, id: ID, in namespace: Namespace.ID, textRange: Range<String.Index>? = nil, prepare: @escaping (() -> Void) = {})

    public init(_ label: Text? = nil, textRange: Range<String.Index>, prepare: @escaping (() -> Void) = {}) where ID == Never

    public init(_ labelKey: LocalizedStringKey, id: ID, textRange: Range<String.Index>? = nil, prepare: @escaping (() -> Void) = {})

    public init<L>(_ label: L, id: ID, textRange: Range<String.Index>? = nil, prepare: @escaping (() -> Void) = {}) where L : StringProtocol

    public init(_ labelKey: LocalizedStringKey, id: ID, in namespace: Namespace.ID, textRange: Range<String.Index>? = nil, prepare: @escaping (() -> Void) = {})

    public init<L>(_ label: L, _ id: ID, in namespace: Namespace.ID, textRange: Range<String.Index>? = nil, prepare: @escaping (() -> Void) = {}) where L : StringProtocol

    public init(_ labelKey: LocalizedStringKey, textRange: Range<String.Index>, prepare: @escaping (() -> Void) = {})

    public init<L>(_ label: L, textRange: Range<String.Index>, prepare: @escaping (() -> Void) = {}) where ID == Never, L : StringProtocol
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension AccessibilityRotorEntry : AccessibilityRotorContent {

    public var body: Never { get }

    public typealias Body = Never
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
public struct AccessibilitySystemRotor {

    public static func links(visited: Bool) -> AccessibilitySystemRotor

    public static var links: AccessibilitySystemRotor { get }

    public static func headings(level: AccessibilityHeadingLevel) -> AccessibilitySystemRotor

    public static var headings: AccessibilitySystemRotor { get }

    public static var boldText: AccessibilitySystemRotor { get }

    public static var italicText: AccessibilitySystemRotor { get }

    public static var underlineText: AccessibilitySystemRotor { get }

    public static var misspelledWords: AccessibilitySystemRotor { get }

    public static var images: AccessibilitySystemRotor { get }

    public static var textFields: AccessibilitySystemRotor { get }

    public static var tables: AccessibilitySystemRotor { get }

    public static var lists: AccessibilitySystemRotor { get }

    public static var landmarks: AccessibilitySystemRotor { get }
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
public struct AccessibilityTechnologies : SetAlgebra {

    public static var voiceOver: AccessibilityTechnologies

    public static var switchControl: AccessibilityTechnologies

    public init()

    public func union(_ other: AccessibilityTechnologies) -> AccessibilityTechnologies

    public mutating func formUnion(_ other: AccessibilityTechnologies)

    public func intersection(_ other: AccessibilityTechnologies) -> AccessibilityTechnologies

    public mutating func formIntersection(_ other: AccessibilityTechnologies)

    public func symmetricDifference(_ other: AccessibilityTechnologies) -> AccessibilityTechnologies

    public mutating func formSymmetricDifference(_ other: AccessibilityTechnologies)

    public func contains(_ member: AccessibilityTechnologies) -> Bool

    public mutating func insert(_ newMember: AccessibilityTechnologies) -> (inserted: Bool, memberAfterInsert: AccessibilityTechnologies)

    public mutating func remove(_ member: AccessibilityTechnologies) -> AccessibilityTechnologies?

    public mutating func update(with newMember: AccessibilityTechnologies) -> AccessibilityTechnologies?

    public static func == (a: AccessibilityTechnologies, b: AccessibilityTechnologies) -> Bool

    public typealias ArrayLiteralElement = AccessibilityTechnologies

    public typealias Element = AccessibilityTechnologies
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
public struct AccessibilityTextContentType {

    public static let plain: AccessibilityTextContentType

    public static let console: AccessibilityTextContentType

    public static let fileSystem: AccessibilityTextContentType

    public static let messaging: AccessibilityTextContentType

    public static let narrative: AccessibilityTextContentType

    public static let sourceCode: AccessibilityTextContentType

    public static let spreadsheet: AccessibilityTextContentType

    public static let wordProcessing: AccessibilityTextContentType
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public struct AccessibilityTraits : SetAlgebra {

    public static let isButton: AccessibilityTraits

    public static let isHeader: AccessibilityTraits

    public static let isSelected: AccessibilityTraits

    public static let isLink: AccessibilityTraits

    public static let isSearchField: AccessibilityTraits

    public static let isImage: AccessibilityTraits

    public static let playsSound: AccessibilityTraits

    public static let isKeyboardKey: AccessibilityTraits

    public static let isStaticText: AccessibilityTraits

    public static let isSummaryElement: AccessibilityTraits

    public static let updatesFrequently: AccessibilityTraits

    public static let startsMediaSession: AccessibilityTraits

    public static let allowsDirectInteraction: AccessibilityTraits

    public static let causesPageTurn: AccessibilityTraits

    public static let isModal: AccessibilityTraits

    public init()

    public func union(_ other: AccessibilityTraits) -> AccessibilityTraits

    public mutating func formUnion(_ other: AccessibilityTraits)

    public func intersection(_ other: AccessibilityTraits) -> AccessibilityTraits

    public mutating func formIntersection(_ other: AccessibilityTraits)

    public func symmetricDifference(_ other: AccessibilityTraits) -> AccessibilityTraits

    public mutating func formSymmetricDifference(_ other: AccessibilityTraits)

    public func contains(_ member: AccessibilityTraits) -> Bool

    public mutating func insert(_ newMember: AccessibilityTraits) -> (inserted: Bool, memberAfterInsert: AccessibilityTraits)

    public mutating func remove(_ member: AccessibilityTraits) -> AccessibilityTraits?

    public mutating func update(with newMember: AccessibilityTraits) -> AccessibilityTraits?

    public static func == (a: AccessibilityTraits, b: AccessibilityTraits) -> Bool

    public typealias ArrayLiteralElement = AccessibilityTraits

    public typealias Element = AccessibilityTraits
}

@available(iOS 16.0, macOS 13.0, watchOS 9.0, *)
@available(tvOS, unavailable)
public struct AccessoryCircularCapacityGaugeStyle : GaugeStyle {

    public init()

    public func makeBody(configuration: AccessoryCircularCapacityGaugeStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS 16.0, macOS 13.0, watchOS 9.0, *)
@available(tvOS, unavailable)
public struct AccessoryCircularGaugeStyle : GaugeStyle {

    public init()

    public func makeBody(configuration: AccessoryCircularGaugeStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS 16.0, macOS 13.0, watchOS 9.0, *)
@available(tvOS, unavailable)
public struct AccessoryLinearCapacityGaugeStyle : GaugeStyle {

    public init()

    public func makeBody(configuration: AccessoryLinearCapacityGaugeStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS 16.0, macOS 13.0, watchOS 9.0, *)
@available(tvOS, unavailable)
public struct AccessoryLinearGaugeStyle : GaugeStyle {

    public init()

    public func makeBody(configuration: AccessoryLinearGaugeStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS, introduced: 13.0, deprecated: 100000.0, message: "use `View.alert(title:isPresented:presenting::actions:) instead.")
@available(macOS, introduced: 10.15, deprecated: 100000.0, message: "use `View.alert(title:isPresented:presenting::actions:) instead.")
@available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "use `View.alert(title:isPresented:presenting::actions:) instead.")
@available(watchOS, introduced: 6.0, deprecated: 100000.0, message: "use `View.alert(title:isPresented:presenting::actions:) instead.")
public struct Alert {

    public init(title: Text, message: Text? = nil, dismissButton: Alert.Button? = nil)

    public init(title: Text, message: Text? = nil, primaryButton: Alert.Button, secondaryButton: Alert.Button)

    public struct Button {

                                public static func `default`(_ label: Text, action: (() -> Void)? = {}) -> Alert.Button

                                    public static func cancel(_ label: Text, action: (() -> Void)? = {}) -> Alert.Button

                                        public static func cancel(_ action: (() -> Void)? = {}) -> Alert.Button

                                    public static func destructive(_ label: Text, action: (() -> Void)? = {}) -> Alert.Button
    }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct Alignment : Equatable {

    public var horizontal: HorizontalAlignment

    public var vertical: VerticalAlignment

    @inlinable public init(horizontal: HorizontalAlignment, vertical: VerticalAlignment)

    public static func == (a: Alignment, b: Alignment) -> Bool
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Alignment {

    public static let center: Alignment

    public static let leading: Alignment

    public static let trailing: Alignment

    public static let top: Alignment

    public static let bottom: Alignment

    public static let topLeading: Alignment

    public static let topTrailing: Alignment

    public static let bottomLeading: Alignment

    public static let bottomTrailing: Alignment
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Alignment {

    public static var centerFirstTextBaseline: Alignment { get }

    public static var centerLastTextBaseline: Alignment { get }

    public static var leadingFirstTextBaseline: Alignment { get }

    public static var leadingLastTextBaseline: Alignment { get }

    public static var trailingFirstTextBaseline: Alignment { get }

    public static var trailingLastTextBaseline: Alignment { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Alignment : Sendable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public protocol AlignmentID {

    static func defaultValue(in context: ViewDimensions) -> CGFloat
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct Anchor<Value> {

    @frozen public struct Source {
    }
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension Anchor : Equatable where Value : Equatable {

    public static func == (lhs: Anchor<Value>, rhs: Anchor<Value>) -> Bool
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension Anchor : Hashable where Value : Hashable {

    public func hash(into hasher: inout Hasher)

    public var hashValue: Int { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Anchor.Source {

    public init<T>(_ array: [Anchor<T>.Source]) where Value == [T]
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Anchor.Source {

    public init<T>(_ anchor: Anchor<T>.Source?) where Value == T?
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Anchor.Source where Value == CGPoint {

    public static func point(_ p: CGPoint) -> Anchor<Value>.Source

    public static func unitPoint(_ p: UnitPoint) -> Anchor<Value>.Source

    public static var topLeading: Anchor<CGPoint>.Source { get }

    public static var top: Anchor<CGPoint>.Source { get }

    public static var topTrailing: Anchor<CGPoint>.Source { get }

    public static var leading: Anchor<CGPoint>.Source { get }

    public static var center: Anchor<CGPoint>.Source { get }

    public static var trailing: Anchor<CGPoint>.Source { get }

    public static var bottomLeading: Anchor<CGPoint>.Source { get }

    public static var bottom: Anchor<CGPoint>.Source { get }

    public static var bottomTrailing: Anchor<CGPoint>.Source { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Anchor.Source where Value == CGRect {

    public static func rect(_ r: CGRect) -> Anchor<Value>.Source

    public static var bounds: Anchor<CGRect>.Source { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct Angle {

    public var radians: Double

    @inlinable public var degrees: Double

    @inlinable public init()

    @inlinable public init(radians: Double)

    @inlinable public init(degrees: Double)

    @inlinable public static func radians(_ radians: Double) -> Angle

    @inlinable public static func degrees(_ degrees: Double) -> Angle
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Angle : Hashable, Comparable {

    @inlinable public static func < (lhs: Angle, rhs: Angle) -> Bool

    public func hash(into hasher: inout Hasher)

    public static func == (a: Angle, b: Angle) -> Bool

    public var hashValue: Int { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Angle : Animatable {

    public var animatableData: Double

    @inlinable public static var zero: Angle { get }

    public typealias AnimatableData = Double
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Angle : Sendable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct AngularGradient : ShapeStyle, View {

    public init(gradient: Gradient, center: UnitPoint, startAngle: Angle = .zero, endAngle: Angle = .zero)

    public init(colors: [Color], center: UnitPoint, startAngle: Angle, endAngle: Angle)

    public init(stops: [Gradient.Stop], center: UnitPoint, startAngle: Angle, endAngle: Angle)

    public init(gradient: Gradient, center: UnitPoint, angle: Angle = .zero)

    public init(colors: [Color], center: UnitPoint, angle: Angle = .zero)

    public init(stops: [Gradient.Stop], center: UnitPoint, angle: Angle = .zero)

    public typealias Body
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public protocol Animatable {

    associatedtype AnimatableData : VectorArithmetic

    var animatableData: Self.AnimatableData { get set }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Animatable where Self : VectorArithmetic {

    public var animatableData: Self
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Animatable where Self.AnimatableData == EmptyAnimatableData {

    public var animatableData: EmptyAnimatableData
}

@available(iOS, introduced: 13.0, deprecated: 100000.0, message: "use Animatable directly")
@available(macOS, introduced: 10.15, deprecated: 100000.0, message: "use Animatable directly")
@available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "use Animatable directly")
@available(watchOS, introduced: 6.0, deprecated: 100000.0, message: "use Animatable directly")
public protocol AnimatableModifier : Animatable, ViewModifier {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct AnimatablePair<First, Second> : VectorArithmetic where First : VectorArithmetic, Second : VectorArithmetic {

    public var first: First

    public var second: Second

    @inlinable public init(_ first: First, _ second: Second)

    public static var zero: AnimatablePair<First, Second> { get }

    public static func += (lhs: inout AnimatablePair<First, Second>, rhs: AnimatablePair<First, Second>)

    public static func -= (lhs: inout AnimatablePair<First, Second>, rhs: AnimatablePair<First, Second>)

    public static func + (lhs: AnimatablePair<First, Second>, rhs: AnimatablePair<First, Second>) -> AnimatablePair<First, Second>

    public static func - (lhs: AnimatablePair<First, Second>, rhs: AnimatablePair<First, Second>) -> AnimatablePair<First, Second>

    public mutating func scale(by rhs: Double)

    public var magnitudeSquared: Double { get }

    public static func == (a: AnimatablePair<First, Second>, b: AnimatablePair<First, Second>) -> Bool
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct Animation : Equatable {

    public static func == (lhs: Animation, rhs: Animation) -> Bool
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Animation {

    public static let `default`: Animation
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Animation {

    public static func spring(response: Double = 0.55, dampingFraction: Double = 0.825, blendDuration: Double = 0) -> Animation

    public static func interactiveSpring(response: Double = 0.15, dampingFraction: Double = 0.86, blendDuration: Double = 0.25) -> Animation
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Animation {

    public func repeatCount(_ repeatCount: Int, autoreverses: Bool = true) -> Animation

    public func repeatForever(autoreverses: Bool = true) -> Animation
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Animation {

    public static func easeInOut(duration: Double) -> Animation

    public static var easeInOut: Animation { get }

    public static func easeIn(duration: Double) -> Animation

    public static var easeIn: Animation { get }

    public static func easeOut(duration: Double) -> Animation

    public static var easeOut: Animation { get }

    public static func linear(duration: Double) -> Animation

    public static var linear: Animation { get }

    public static func timingCurve(_ c0x: Double, _ c0y: Double, _ c1x: Double, _ c1y: Double, duration: Double = 0.35) -> Animation
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Animation {

    public static func interpolatingSpring(mass: Double = 1.0, stiffness: Double, damping: Double, initialVelocity: Double = 0.0) -> Animation
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Animation {

    public func delay(_ delay: Double) -> Animation
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Animation {

    public func speed(_ speed: Double) -> Animation
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Animation : CustomStringConvertible, CustomDebugStringConvertible, CustomReflectable {

    public var description: String { get }

    public var debugDescription: String { get }

    public var customMirror: Mirror { get }
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
public struct AnimationTimelineSchedule : TimelineSchedule {

    public init(minimumInterval: Double? = nil, paused: Bool = false)

    public func entries(from start: Date, mode: TimelineScheduleMode) -> AnimationTimelineSchedule.Entries

    public struct Entries : Sequence, IteratorProtocol {

                                                                                                                    public mutating func next() -> Date?

            public typealias Element = Date

                public typealias Iterator = AnimationTimelineSchedule.Entries
    }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct AnyGesture<Value> : Gesture {

    public init<T>(_ gesture: T) where Value == T.Value, T : Gesture

    public typealias Body = Never
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
@frozen public struct AnyGradient : Hashable, ShapeStyle {

    public init(_ gradient: Gradient)

    public func hash(into hasher: inout Hasher)

    public static func == (lhs: AnyGradient, rhs: AnyGradient) -> Bool

    public var hashValue: Int { get }
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension AnyGradient {

    public func colorSpace(_ space: Gradient.ColorSpace) -> AnyGradient
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
@frozen public struct AnyLayout : Layout {

    public init<L>(_ layout: L) where L : Layout

    public struct Cache {
    }

    public typealias AnimatableData

    public func makeCache(subviews: AnyLayout.Subviews) -> AnyLayout.Cache

    public func updateCache(_ cache: inout AnyLayout.Cache, subviews: AnyLayout.Subviews)

    public func spacing(subviews: AnyLayout.Subviews, cache: inout AnyLayout.Cache) -> ViewSpacing

    public func sizeThatFits(proposal: ProposedViewSize, subviews: AnyLayout.Subviews, cache: inout AnyLayout.Cache) -> CGSize

    public func placeSubviews(in bounds: CGRect, proposal: ProposedViewSize, subviews: AnyLayout.Subviews, cache: inout AnyLayout.Cache)

    public func explicitAlignment(of guide: HorizontalAlignment, in bounds: CGRect, proposal: ProposedViewSize, subviews: AnyLayout.Subviews, cache: inout AnyLayout.Cache) -> CGFloat?

    public func explicitAlignment(of guide: VerticalAlignment, in bounds: CGRect, proposal: ProposedViewSize, subviews: AnyLayout.Subviews, cache: inout AnyLayout.Cache) -> CGFloat?

    public var animatableData: AnyLayout.AnimatableData
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
@frozen public struct AnyShape : Shape {

    public init<S>(_ shape: S) where S : Shape

    public func path(in rect: CGRect) -> Path

    public func sizeThatFits(_ proposal: ProposedViewSize) -> CGSize

    public typealias AnimatableData

    public var animatableData: AnyShape.AnimatableData

    public typealias Body
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
@frozen public struct AnyShapeStyle : ShapeStyle {

    public init<S>(_ style: S) where S : ShapeStyle
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct AnyTransition {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension AnyTransition {

    public static var slide: AnyTransition { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension AnyTransition {

    public static func offset(_ offset: CGSize) -> AnyTransition

    public static func offset(x: CGFloat = 0, y: CGFloat = 0) -> AnyTransition
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension AnyTransition {

    public func combined(with other: AnyTransition) -> AnyTransition
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension AnyTransition {

    public static var scale: AnyTransition { get }

    public static func scale(scale: CGFloat, anchor: UnitPoint = .center) -> AnyTransition
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension AnyTransition {

    public static let opacity: AnyTransition
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension AnyTransition {

    public static func modifier<E>(active: E, identity: E) -> AnyTransition where E : ViewModifier
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension AnyTransition {

    public static func asymmetric(insertion: AnyTransition, removal: AnyTransition) -> AnyTransition
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension AnyTransition {

    public static let identity: AnyTransition
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension AnyTransition {

    public static func move(edge: Edge) -> AnyTransition
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension AnyTransition {

    public func animation(_ animation: Animation?) -> AnyTransition
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct AnyView : View {

    public init<V>(_ view: V) where V : View

    public init<V>(erasing view: V) where V : View

    public typealias Body = Never
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public protocol App {

    associatedtype Body : Scene

    @SceneBuilder @MainActor var body: Self.Body { get }

    @MainActor init()
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension App {

    @MainActor public static func main()
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
@frozen @propertyWrapper public struct AppStorage<Value> : DynamicProperty {

    public var wrappedValue: Value { get nonmutating set }

    public var projectedValue: Binding<Value> { get }
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension AppStorage {

    public init(wrappedValue: Value, _ key: String, store: UserDefaults? = nil) where Value == Bool

    public init(wrappedValue: Value, _ key: String, store: UserDefaults? = nil) where Value == Int

    public init(wrappedValue: Value, _ key: String, store: UserDefaults? = nil) where Value == Double

    public init(wrappedValue: Value, _ key: String, store: UserDefaults? = nil) where Value == String

    public init(wrappedValue: Value, _ key: String, store: UserDefaults? = nil) where Value == URL

    public init(wrappedValue: Value, _ key: String, store: UserDefaults? = nil) where Value == Data

    public init(wrappedValue: Value, _ key: String, store: UserDefaults? = nil) where Value : RawRepresentable, Value.RawValue == Int

    public init(wrappedValue: Value, _ key: String, store: UserDefaults? = nil) where Value : RawRepresentable, Value.RawValue == String
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension AppStorage where Value : ExpressibleByNilLiteral {

    public init(_ key: String, store: UserDefaults? = nil) where Value == Bool?

    public init(_ key: String, store: UserDefaults? = nil) where Value == Int?

    public init(_ key: String, store: UserDefaults? = nil) where Value == Double?

    public init(_ key: String, store: UserDefaults? = nil) where Value == String?

    public init(_ key: String, store: UserDefaults? = nil) where Value == URL?

    public init(_ key: String, store: UserDefaults? = nil) where Value == Data?
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension AppStorage {

    public init<R>(_ key: String, store: UserDefaults? = nil) where Value == R?, R : RawRepresentable, R.RawValue == String

    public init<R>(_ key: String, store: UserDefaults? = nil) where Value == R?, R : RawRepresentable, R.RawValue == Int
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
public struct AsyncImage<Content> : View where Content : View {

    public init(url: URL?, scale: CGFloat = 1) where Content == Image

    public init<I, P>(url: URL?, scale: CGFloat = 1, @ViewBuilder content: @escaping (Image) -> I, @ViewBuilder placeholder: @escaping () -> P) where Content == _ConditionalContent<I, P>, I : View, P : View

    public init(url: URL?, scale: CGFloat = 1, transaction: Transaction = Transaction(), @ViewBuilder content: @escaping (AsyncImagePhase) -> Content)

    @MainActor public var body: some View { get }

    public typealias Body = some View
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
public enum AsyncImagePhase {

    case empty

    case success(Image)

    case failure(Error)

    public var image: Image? { get }

    public var error: Error? { get }
}

@available(iOS 15.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct AutomaticControlGroupStyle : ControlGroupStyle {

    @MainActor public func makeBody(configuration: AutomaticControlGroupStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS 16.0, macOS 13.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct AutomaticDisclosureGroupStyle : DisclosureGroupStyle {

    public init()

    public func makeBody(configuration: AutomaticDisclosureGroupStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public struct AutomaticFormStyle : FormStyle {

    public init()

    public func makeBody(configuration: AutomaticFormStyle.Configuration) -> some View


    public typealias Body = some View
}

public struct AutomaticLabeledContentStyle : LabeledContentStyle {

    public init()

    public func body(configuration: AutomaticLabeledContentStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(macOS 13.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct AutomaticMenuBarExtraStyle : MenuBarExtraStyle {

    public init()
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public struct AutomaticNavigationSplitViewStyle : NavigationSplitViewStyle {

    public init()

    public func makeBody(configuration: AutomaticNavigationSplitViewStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct AutomaticTableStyle : TableStyle {

    public func makeBody(configuration: AutomaticTableStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public enum Axis : Int8, CaseIterable {

    case horizontal

    case vertical

    @frozen public struct Set : OptionSet {

                        public typealias Element = Axis.Set

                                                                    public let rawValue: Int8

                                                                        public init(rawValue: Int8)

        public static let horizontal: Axis.Set

        public static let vertical: Axis.Set

            public typealias ArrayLiteralElement = Axis.Set.Element

                                public typealias RawValue = Int8
    }

    public init?(rawValue: Int8)

    public typealias AllCases = [Axis]

    public typealias RawValue = Int8

    public static var allCases: [Axis] { get }

    public var rawValue: Int8 { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Axis : CustomStringConvertible {

    public var description: String { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Axis : Equatable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Axis : Hashable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Axis : RawRepresentable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Axis : Sendable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Axis.Set : Sendable {
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
@frozen public struct BackgroundStyle : ShapeStyle {

    @inlinable public init()
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension BackgroundStyle : Sendable {
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public struct BackgroundTask<Request, Response> : Sendable {
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension BackgroundTask {

    public static var urlSession: BackgroundTask<String, Void> { get }

    public static func urlSession(_ identifier: String) -> BackgroundTask<Void, Void>

    public static func urlSession(matching: @escaping @Sendable (String) -> Bool) -> BackgroundTask<String, Void>
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public struct BalancedNavigationSplitViewStyle : NavigationSplitViewStyle {

    public init()

    public func makeBody(configuration: BalancedNavigationSplitViewStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen @propertyWrapper @dynamicMemberLookup public struct Binding<Value> {

    public var transaction: Transaction

    public init(get: @escaping () -> Value, set: @escaping (Value) -> Void)

    public init(get: @escaping () -> Value, set: @escaping (Value, Transaction) -> Void)

    public static func constant(_ value: Value) -> Binding<Value>

    public var wrappedValue: Value { get nonmutating set }

    public var projectedValue: Binding<Value> { get }

    public init(projectedValue: Binding<Value>)

    public subscript<Subject>(dynamicMember keyPath: WritableKeyPath<Value, Subject>) -> Binding<Subject> { get }
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension Binding : Identifiable where Value : Identifiable {

    public var id: Value.ID { get }

    public typealias ID = Value.ID
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension Binding : Sequence where Value : MutableCollection {

    public typealias Element = Binding<Value.Element>

    public typealias Iterator = IndexingIterator<Binding<Value>>

    public typealias SubSequence = Slice<Binding<Value>>
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension Binding : Collection where Value : MutableCollection {

    public typealias Index = Value.Index

    public typealias Indices = Value.Indices

    public var startIndex: Binding<Value>.Index { get }

    public var endIndex: Binding<Value>.Index { get }

    public var indices: Value.Indices { get }

    public func index(after i: Binding<Value>.Index) -> Binding<Value>.Index

    public func formIndex(after i: inout Binding<Value>.Index)

    public subscript(position: Binding<Value>.Index) -> Binding<Value>.Element { get }
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension Binding : BidirectionalCollection where Value : BidirectionalCollection, Value : MutableCollection {

    public func index(before i: Binding<Value>.Index) -> Binding<Value>.Index

    public func formIndex(before i: inout Binding<Value>.Index)
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension Binding : RandomAccessCollection where Value : MutableCollection, Value : RandomAccessCollection {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Binding {

    public func transaction(_ transaction: Transaction) -> Binding<Value>

    public func animation(_ animation: Animation? = .default) -> Binding<Value>
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Binding : DynamicProperty {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Binding {

    public init<V>(_ base: Binding<V>) where Value == V?

    public init?(_ base: Binding<Value?>)

    public init<V>(_ base: Binding<V>) where Value == AnyHashable, V : Hashable
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public enum BlendMode {

    case normal

    case multiply

    case screen

    case overlay

    case darken

    case lighten

    case colorDodge

    case colorBurn

    case softLight

    case hardLight

    case difference

    case exclusion

    case hue

    case saturation

    case color

    case luminosity

    case sourceAtop

    case destinationOver

    case destinationOut

    case plusDarker

    case plusLighter

    public static func == (a: BlendMode, b: BlendMode) -> Bool

    public func hash(into hasher: inout Hasher)

    public var hashValue: Int { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension BlendMode : Equatable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension BlendMode : Hashable {
}

@available(iOS, unavailable)
@available(macOS, introduced: 11.0, deprecated: 100000.0, message: "Use .menuStyle(.button) and .buttonStyle(.bordered).")
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct BorderedButtonMenuStyle : MenuStyle {

    public init()

    public func makeBody(configuration: BorderedButtonMenuStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS 15.0, macOS 10.15, tvOS 13.0, watchOS 7.0, *)
public struct BorderedButtonStyle : PrimitiveButtonStyle {

    public init()

    public func makeBody(configuration: BorderedButtonStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(macOS 12.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct BorderedListStyle : ListStyle {

    public init()

    public init(alternatesRowBackgrounds: Bool)
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
public struct BorderedProminentButtonStyle : PrimitiveButtonStyle {

    public init()

    public func makeBody(configuration: BorderedProminentButtonStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(macOS 12.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct BorderedTableStyle : TableStyle {

    public init()

    public init(alternatesRowBackgrounds: Bool)

    public func makeBody(configuration: BorderedTableStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS, unavailable)
@available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Use `BorderlessButtonMenuStyle` instead.")
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct BorderlessButtonMenuButtonStyle : MenuButtonStyle {

    public init()
}

@available(iOS, introduced: 14.0, deprecated: 100000.0, message: "Use .menuStyle(.button) and .buttonStyle(.borderless).")
@available(macOS, introduced: 11.0, deprecated: 100000.0, message: "Use .menuStyle(.button) and .buttonStyle(.borderless).")
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct BorderlessButtonMenuStyle : MenuStyle {

    public init()

    @available(iOS, unavailable)
    @available(macOS, introduced: 11.0, deprecated: 12.0, message: "Use ``View/menuIndicator(_)`` instead.")
    public init(showsMenuIndicator: Bool)

    public func makeBody(configuration: BorderlessButtonMenuStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS 13.0, macOS 10.15, watchOS 8.0, *)
@available(tvOS, unavailable)
public struct BorderlessButtonStyle : PrimitiveButtonStyle {

    public init()

    public func makeBody(configuration: BorderlessButtonStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS, unavailable)
@available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Use `BorderlessButtonMenuStyle` instead.")
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct BorderlessPullDownMenuButtonStyle : MenuButtonStyle {

    public init()
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public struct Button<Label> : View where Label : View {

    public init(action: @escaping () -> Void, @ViewBuilder label: () -> Label)

    @MainActor public var body: some View { get }

    public typealias Body = some View
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Button where Label == Text {

    public init(_ titleKey: LocalizedStringKey, action: @escaping () -> Void)

    public init<S>(_ title: S, action: @escaping () -> Void) where S : StringProtocol
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Button where Label == PrimitiveButtonStyleConfiguration.Label {

    @available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
    public init(_ configuration: PrimitiveButtonStyleConfiguration)
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension Button {

    public init(role: ButtonRole?, action: @escaping () -> Void, @ViewBuilder label: () -> Label)
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension Button where Label == Text {

    public init(_ titleKey: LocalizedStringKey, role: ButtonRole?, action: @escaping () -> Void)

    public init<S>(_ title: S, role: ButtonRole?, action: @escaping () -> Void) where S : StringProtocol
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
public struct ButtonBorderShape : Equatable {

    public static let automatic: ButtonBorderShape

    public static let roundedRectangle: ButtonBorderShape

    public static func == (a: ButtonBorderShape, b: ButtonBorderShape) -> Bool
}

@available(iOS 16.0, macOS 13.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct ButtonMenuStyle : MenuStyle {

    public init()

    public func makeBody(configuration: ButtonMenuStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
public struct ButtonRole : Equatable {

    public static let destructive: ButtonRole

    public static let cancel: ButtonRole

    public static func == (a: ButtonRole, b: ButtonRole) -> Bool
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public protocol ButtonStyle {

    associatedtype Body : View

    @ViewBuilder func makeBody(configuration: Self.Configuration) -> Self.Body

    typealias Configuration = ButtonStyleConfiguration
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public struct ButtonStyleConfiguration {

    public struct Label : View {

                        public typealias Body = Never
    }

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public let role: ButtonRole?

    public let label: ButtonStyleConfiguration.Label

    public let isPressed: Bool
}

@available(iOS 15.0, macOS 12.0, watchOS 9.0, *)
@available(tvOS, unavailable)
public struct ButtonToggleStyle : ToggleStyle {

    public init()

    public func makeBody(configuration: ButtonToggleStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
public struct Canvas<Symbols> where Symbols : View {

    public var symbols: Symbols

    public var renderer: (inout GraphicsContext, CGSize) -> Void

    public var isOpaque: Bool

    public var colorMode: ColorRenderingMode

    public var rendersAsynchronously: Bool

    public init(opaque: Bool = false, colorMode: ColorRenderingMode = .nonLinear, rendersAsynchronously: Bool = false, renderer: @escaping (inout GraphicsContext, CGSize) -> Void, @ViewBuilder symbols: () -> Symbols)

    public typealias Body = Never
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension Canvas where Symbols == EmptyView {

    public init(opaque: Bool = false, colorMode: ColorRenderingMode = .nonLinear, rendersAsynchronously: Bool = false, renderer: @escaping (inout GraphicsContext, CGSize) -> Void)
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension Canvas : View {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct Capsule : Shape {

    public var style: RoundedCornerStyle

    @inlinable public init(style: RoundedCornerStyle = .circular)

    public func path(in r: CGRect) -> Path

    public typealias AnimatableData = EmptyAnimatableData

    public typealias Body
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Capsule : InsettableShape {

    @inlinable public func inset(by amount: CGFloat) -> some InsettableShape


    public typealias InsetShape = some InsettableShape
}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct CheckboxToggleStyle : ToggleStyle {

    public init()

    public func makeBody(configuration: CheckboxToggleStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct Circle : Shape {

    public func path(in rect: CGRect) -> Path

    @inlinable public init()

    public typealias AnimatableData = EmptyAnimatableData

    public typealias Body
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension Circle {

    public func sizeThatFits(_ proposal: ProposedViewSize) -> CGSize
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Circle : InsettableShape {

    @inlinable public func inset(by amount: CGFloat) -> some InsettableShape


    public typealias InsetShape = some InsettableShape
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Circle : Sendable {
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public struct CircularProgressViewStyle : ProgressViewStyle {

    public init()

    @available(iOS, introduced: 14.0, deprecated: 100000.0, message: "Use ``View/tint(_)`` instead.")
    @available(macOS, introduced: 11.0, deprecated: 100000.0, message: "Use ``View/tint(_)`` instead.")
    @available(tvOS, introduced: 14.0, deprecated: 100000.0, message: "Use ``View/tint(_)`` instead.")
    @available(watchOS, introduced: 7.0, deprecated: 100000.0, message: "Use ``View/tint(_)`` instead.")
    public init(tint: Color)

    public func makeBody(configuration: CircularProgressViewStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct Color : Hashable, CustomStringConvertible {

    @available(iOS 14.0, macOS 11, tvOS 14.0, watchOS 7.0, *)
    public var cgColor: CGColor? { get }

    public func hash(into hasher: inout Hasher)

    public static func == (lhs: Color, rhs: Color) -> Bool

    public var description: String { get }

    public var hashValue: Int { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Color {

    public static var accentColor: Color { get }
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension Color {

    public var gradient: AnyGradient { get }
}

@available(iOS, introduced: 14.0, deprecated: 100000.0, message: "Use Color(cgColor:) when converting a CGColor, or create a standard Color directly")
@available(macOS, introduced: 11.0, deprecated: 100000.0, message: "Use Color(cgColor:) when converting a CGColor, or create a standard Color directly")
@available(tvOS, introduced: 14.0, deprecated: 100000.0, message: "Use Color(cgColor:) when converting a CGColor, or create a standard Color directly")
@available(watchOS, introduced: 7.0, deprecated: 100000.0, message: "Use Color(cgColor:) when converting a CGColor, or create a standard Color directly")
extension Color {

    public init(_ cgColor: CGColor)
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension Color {

    public init(cgColor: CGColor)
}

@available(iOS, unavailable)
@available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Use Color(nsColor:) when converting a NSColor, or create a standard Color directly")
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension Color {

    public init(_ color: NSColor)
}

@available(macOS 12.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension Color {

    public init(nsColor: NSColor)
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Color : View {

    public typealias Body = Never
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Color {

    public enum RGBColorSpace {

                                            case sRGB

                                            case sRGBLinear

                            case displayP3

                                        public static func == (a: Color.RGBColorSpace, b: Color.RGBColorSpace) -> Bool

                                                            public func hash(into hasher: inout Hasher)

                                    public var hashValue: Int { get }
    }

    public init(_ colorSpace: Color.RGBColorSpace = .sRGB, red: Double, green: Double, blue: Double, opacity: Double = 1)

    public init(_ colorSpace: Color.RGBColorSpace = .sRGB, white: Double, opacity: Double = 1)

    public init(hue: Double, saturation: Double, brightness: Double, opacity: Double = 1)
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Color : ShapeStyle {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Color {

    public static let red: Color

    public static let orange: Color

    public static let yellow: Color

    public static let green: Color

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public static let mint: Color

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public static let teal: Color

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public static let cyan: Color

    public static let blue: Color

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public static let indigo: Color

    public static let purple: Color

    public static let pink: Color

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public static let brown: Color

    public static let white: Color

    public static let gray: Color

    public static let black: Color

    public static let clear: Color

    public static let primary: Color

    public static let secondary: Color
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Color {

    public init(_ name: String, bundle: Bundle? = nil)
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Color {

    public func opacity(_ opacity: Double) -> Color
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Color.RGBColorSpace : Equatable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Color.RGBColorSpace : Hashable {
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
@frozen public struct ColorMatrix : Equatable {

    public var r1: Float

    public var r2: Float

    public var r3: Float

    public var r4: Float

    public var r5: Float

    public var g1: Float

    public var g2: Float

    public var g3: Float

    public var g4: Float

    public var g5: Float

    public var b1: Float

    public var b2: Float

    public var b3: Float

    public var b4: Float

    public var b5: Float

    public var a1: Float

    public var a2: Float

    public var a3: Float

    public var a4: Float

    public var a5: Float

    @inlinable public init()

    public static func == (a: ColorMatrix, b: ColorMatrix) -> Bool
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension ColorMatrix : Sendable {
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct ColorPicker<Label> : View where Label : View {

    public init(selection: Binding<Color>, supportsOpacity: Bool = true, @ViewBuilder label: () -> Label)

    public init(selection: Binding<CGColor>, supportsOpacity: Bool = true, @ViewBuilder label: () -> Label)

    @MainActor public var body: some View { get }

    public typealias Body = some View
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension ColorPicker where Label == Text {

    public init(_ titleKey: LocalizedStringKey, selection: Binding<Color>, supportsOpacity: Bool = true)

    public init<S>(_ title: S, selection: Binding<Color>, supportsOpacity: Bool = true) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, selection: Binding<CGColor>, supportsOpacity: Bool = true)

    public init<S>(_ title: S, selection: Binding<CGColor>, supportsOpacity: Bool = true) where S : StringProtocol
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public enum ColorRenderingMode {

    case nonLinear

    case linear

    case extendedLinear

    public static func == (a: ColorRenderingMode, b: ColorRenderingMode) -> Bool

    public func hash(into hasher: inout Hasher)

    public var hashValue: Int { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ColorRenderingMode : Equatable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ColorRenderingMode : Hashable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public enum ColorScheme : CaseIterable {

    case light

    case dark

    public static func == (a: ColorScheme, b: ColorScheme) -> Bool

    public func hash(into hasher: inout Hasher)

    public typealias AllCases = [ColorScheme]

    public static var allCases: [ColorScheme] { get }

    public var hashValue: Int { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ColorScheme : Equatable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ColorScheme : Hashable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public enum ColorSchemeContrast : CaseIterable {

    case standard

    case increased

    public static func == (a: ColorSchemeContrast, b: ColorSchemeContrast) -> Bool

    public func hash(into hasher: inout Hasher)

    public typealias AllCases = [ColorSchemeContrast]

    public static var allCases: [ColorSchemeContrast] { get }

    public var hashValue: Int { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ColorSchemeContrast : Equatable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ColorSchemeContrast : Hashable {
}

@available(iOS, introduced: 15.0, deprecated: 100000.0, message: "replace styled NavigationView with NavigationSplitView")
@available(macOS, introduced: 12.0, deprecated: 100000.0, message: "replace styled NavigationView with NavigationSplitView")
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct ColumnNavigationViewStyle : NavigationViewStyle {
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public struct ColumnsFormStyle : FormStyle {

    public init()

    public func makeBody(configuration: ColumnsFormStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct CommandGroup<Content> : Commands where Content : View {

    public init(before group: CommandGroupPlacement, @ViewBuilder addition: () -> Content)

    public init(after group: CommandGroupPlacement, @ViewBuilder addition: () -> Content)

    public init(replacing group: CommandGroupPlacement, @ViewBuilder addition: () -> Content)

    public var body: some Commands { get }

    public typealias Body = some Commands
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct CommandGroupPlacement {

    public static let appInfo: CommandGroupPlacement

    public static let appSettings: CommandGroupPlacement

    public static let systemServices: CommandGroupPlacement

    public static let appVisibility: CommandGroupPlacement

    public static let appTermination: CommandGroupPlacement

    public static let newItem: CommandGroupPlacement

    public static let saveItem: CommandGroupPlacement

    public static let importExport: CommandGroupPlacement

    public static let printItem: CommandGroupPlacement

    public static let undoRedo: CommandGroupPlacement

    public static let pasteboard: CommandGroupPlacement

    public static let textEditing: CommandGroupPlacement

    public static let textFormatting: CommandGroupPlacement

    public static let toolbar: CommandGroupPlacement

    public static let sidebar: CommandGroupPlacement

    public static let windowSize: CommandGroupPlacement

    @available(iOS, unavailable)
    public static let windowList: CommandGroupPlacement

    @available(macOS 13.0, *)
    @available(iOS, unavailable)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public static let singleWindowList: CommandGroupPlacement

    public static let windowArrangement: CommandGroupPlacement

    public static let help: CommandGroupPlacement
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct CommandMenu<Content> : Commands where Content : View {

    public init(_ nameKey: LocalizedStringKey, @ViewBuilder content: () -> Content)

    public init(_ name: Text, @ViewBuilder content: () -> Content)

    public init<S>(_ name: S, @ViewBuilder content: () -> Content) where S : StringProtocol

    public var body: some Commands { get }

    public typealias Body = some Commands
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public protocol Commands {

    associatedtype Body : Commands

    @CommandsBuilder var body: Self.Body { get }
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
@resultBuilder public struct CommandsBuilder {

    public static func buildBlock() -> EmptyCommands

    public static func buildBlock<C>(_ content: C) -> C where C : Commands
}

@available(iOS 16.0, macOS 13.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension CommandsBuilder {

    public static func buildIf<C>(_ content: C?) -> C? where C : Commands

    public static func buildEither<T, F>(first: T) -> _ConditionalContent<T, F> where T : Commands, F : Commands

    public static func buildEither<T, F>(second: F) -> _ConditionalContent<T, F> where T : Commands, F : Commands

    public static func buildLimitedAvailability<C>(_ content: C) -> some Commands where C : Commands

}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension CommandsBuilder {

    public static func buildBlock<C0, C1>(_ c0: C0, _ c1: C1) -> some Commands where C0 : Commands, C1 : Commands

}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension CommandsBuilder {

    public static func buildBlock<C0, C1, C2>(_ c0: C0, _ c1: C1, _ c2: C2) -> some Commands where C0 : Commands, C1 : Commands, C2 : Commands

}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension CommandsBuilder {

    public static func buildBlock<C0, C1, C2, C3>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3) -> some Commands where C0 : Commands, C1 : Commands, C2 : Commands, C3 : Commands

}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension CommandsBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4) -> some Commands where C0 : Commands, C1 : Commands, C2 : Commands, C3 : Commands, C4 : Commands

}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension CommandsBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5) -> some Commands where C0 : Commands, C1 : Commands, C2 : Commands, C3 : Commands, C4 : Commands, C5 : Commands

}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension CommandsBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6) -> some Commands where C0 : Commands, C1 : Commands, C2 : Commands, C3 : Commands, C4 : Commands, C5 : Commands, C6 : Commands

}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension CommandsBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6, C7>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6, _ c7: C7) -> some Commands where C0 : Commands, C1 : Commands, C2 : Commands, C3 : Commands, C4 : Commands, C5 : Commands, C6 : Commands, C7 : Commands

}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension CommandsBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6, C7, C8>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6, _ c7: C7, _ c8: C8) -> some Commands where C0 : Commands, C1 : Commands, C2 : Commands, C3 : Commands, C4 : Commands, C5 : Commands, C6 : Commands, C7 : Commands, C8 : Commands

}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension CommandsBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6, C7, C8, C9>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6, _ c7: C7, _ c8: C8, _ c9: C9) -> some Commands where C0 : Commands, C1 : Commands, C2 : Commands, C3 : Commands, C4 : Commands, C5 : Commands, C6 : Commands, C7 : Commands, C8 : Commands, C9 : Commands

}

@available(iOS 14.0, macCatalyst 13.4, macOS 10.15.4, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct CompactDatePickerStyle : DatePickerStyle {

    public init()

    public func makeBody(configuration: CompactDatePickerStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
@frozen public struct ContainerRelativeShape : Shape {

    public func path(in rect: CGRect) -> Path

    @inlinable public init()

    public typealias AnimatableData = EmptyAnimatableData

    public typealias Body
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ContainerRelativeShape : InsettableShape {

    @inlinable public func inset(by amount: CGFloat) -> some InsettableShape


    public typealias InsetShape = some InsettableShape
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ContainerRelativeShape : Sendable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public enum ContentMode : Hashable, CaseIterable {

    case fit

    case fill

    public static func == (a: ContentMode, b: ContentMode) -> Bool

    public func hash(into hasher: inout Hasher)

    public typealias AllCases = [ContentMode]

    public static var allCases: [ContentMode] { get }

    public var hashValue: Int { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ContentMode : Sendable {
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
public struct ContentShapeKinds : OptionSet {

    public var rawValue: Int

    public init(rawValue: Int)

    public static let interaction: ContentShapeKinds

    @available(watchOS, unavailable)
    @available(tvOS, unavailable)
    public static let dragPreview: ContentShapeKinds

    @available(iOS, unavailable)
    @available(tvOS, unavailable)
    public static let focusEffect: ContentShapeKinds

    public typealias ArrayLiteralElement = ContentShapeKinds

    public typealias Element = ContentShapeKinds

    public typealias RawValue = Int
}

@available(iOS, introduced: 13.0, deprecated: 100000.0, renamed: "DynamicTypeSize")
@available(macOS, introduced: 10.15, deprecated: 100000.0, renamed: "DynamicTypeSize")
@available(tvOS, introduced: 13.0, deprecated: 100000.0, renamed: "DynamicTypeSize")
@available(watchOS, introduced: 6.0, deprecated: 100000.0, renamed: "DynamicTypeSize")
public enum ContentSizeCategory : Hashable, CaseIterable {

    case extraSmall

    case small

    case medium

    case large

    case extraLarge

    case extraExtraLarge

    case extraExtraExtraLarge

    case accessibilityMedium

    case accessibilityLarge

    case accessibilityExtraLarge

    case accessibilityExtraExtraLarge

    case accessibilityExtraExtraExtraLarge

    @available(iOS 13.4, macOS 10.15.4, tvOS 13.4, watchOS 6.2, *)
    public var isAccessibilityCategory: Bool { get }

    public static func == (a: ContentSizeCategory, b: ContentSizeCategory) -> Bool

    public func hash(into hasher: inout Hasher)

    public typealias AllCases = [ContentSizeCategory]

    public static var allCases: [ContentSizeCategory] { get }

    public var hashValue: Int { get }
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ContentSizeCategory {

    public static func < (lhs: ContentSizeCategory, rhs: ContentSizeCategory) -> Bool

    public static func <= (lhs: ContentSizeCategory, rhs: ContentSizeCategory) -> Bool

    public static func > (lhs: ContentSizeCategory, rhs: ContentSizeCategory) -> Bool

    public static func >= (lhs: ContentSizeCategory, rhs: ContentSizeCategory) -> Bool
}

public struct ContentTransition : Equatable {

    public static let identity: ContentTransition

    public static let opacity: ContentTransition

    public static let interpolate: ContentTransition

    public static func == (a: ContentTransition, b: ContentTransition) -> Bool
}

@available(iOS, introduced: 13.0, deprecated: 100000.0, message: "Use `contextMenu(menuItems:)` instead.")
@available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Use `contextMenu(menuItems:)` instead.")
@available(tvOS, unavailable)
@available(watchOS, introduced: 6.0, deprecated: 7.0)
public struct ContextMenu<MenuItems> where MenuItems : View {

    public init(@ViewBuilder menuItems: () -> MenuItems)
}

@available(macCatalyst 13.0, macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public enum ControlActiveState : Equatable, CaseIterable {

    case key

    case active

    case inactive

    public func hash(into hasher: inout Hasher)

    public static func == (a: ControlActiveState, b: ControlActiveState) -> Bool

    public typealias AllCases = [ControlActiveState]

    public static var allCases: [ControlActiveState] { get }

    public var hashValue: Int { get }
}

@available(macCatalyst 13.0, macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension ControlActiveState : Hashable {
}

@available(iOS 15.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct ControlGroup<Content> : View where Content : View {

    public init(@ViewBuilder content: () -> Content)

    @MainActor public var body: some View { get }

    public typealias Body = some View
}

@available(iOS 15.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension ControlGroup where Content == ControlGroupStyleConfiguration.Content {

    public init(_ configuration: ControlGroupStyleConfiguration)
}

@available(iOS 16.0, macOS 13.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension ControlGroup {

    public init<C, L>(@ViewBuilder content: () -> C, @ViewBuilder label: () -> L) where Content == LabeledControlGroupContent<C, L>, C : View, L : View
}

@available(iOS 15.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public protocol ControlGroupStyle {

    associatedtype Body : View

    @ViewBuilder @MainActor func makeBody(configuration: Self.Configuration) -> Self.Body

    typealias Configuration = ControlGroupStyleConfiguration
}

@available(iOS 15.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension ControlGroupStyle where Self == AutomaticControlGroupStyle {

    public static var automatic: AutomaticControlGroupStyle { get }
}

@available(iOS 15.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension ControlGroupStyle where Self == NavigationControlGroupStyle {

    public static var navigation: NavigationControlGroupStyle { get }
}

@available(iOS 15.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct ControlGroupStyleConfiguration {

    public struct Content : View {

                        public typealias Body = Never
    }

    public let content: ControlGroupStyleConfiguration.Content

    @available(iOS 16.0, macOS 13.0, *)
    public struct Label : View {

                        public typealias Body = Never
    }

    @available(iOS 16.0, macOS 13.0, *)
    public let label: ControlGroupStyleConfiguration.Label
}

@available(iOS 15.0, macOS 10.15, watchOS 9.0, *)
@available(tvOS, unavailable)
public enum ControlSize : CaseIterable {

    case mini

    case small

    case regular

    @available(macOS 11.0, *)
    case large

    public static var allCases: [ControlSize] { get }

    public static func == (a: ControlSize, b: ControlSize) -> Bool

    public func hash(into hasher: inout Hasher)

    public typealias AllCases = [ControlSize]

    public var hashValue: Int { get }
}

@available(iOS 15.0, macOS 10.15, watchOS 9.0, *)
@available(tvOS, unavailable)
extension ControlSize : Equatable {
}

@available(iOS 15.0, macOS 10.15, watchOS 9.0, *)
@available(tvOS, unavailable)
extension ControlSize : Hashable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public enum CoordinateSpace {

    case global

    case local

    case named(AnyHashable)
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension CoordinateSpace {

    public var isGlobal: Bool { get }

    public var isLocal: Bool { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension CoordinateSpace : Equatable, Hashable {

    public func hash(into hasher: inout Hasher)

    public static func == (lhs: CoordinateSpace, rhs: CoordinateSpace) -> Bool

    public var hashValue: Int { get }
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public protocol CustomPresentationDetent {

    static func height(in context: Self.Context) -> CGFloat?
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension CustomPresentationDetent {

    public typealias Context = PresentationDetent.Context
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public protocol CustomizableToolbarContent : ToolbarContent where Self.Body : CustomizableToolbarContent {
}

@available(iOS 13.0, macOS 10.15, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct DatePicker<Label> : View where Label : View {

    public typealias Components = DatePickerComponents

    @MainActor public var body: some View { get }

    public typealias Body = some View
}

@available(iOS 13.0, macOS 10.15, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension DatePicker {

    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public init(selection: Binding<Date>, displayedComponents: DatePicker<Label>.Components = [.hourAndMinute, .date], @ViewBuilder label: () -> Label)

    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public init(selection: Binding<Date>, in range: ClosedRange<Date>, displayedComponents: DatePicker<Label>.Components = [.hourAndMinute, .date], @ViewBuilder label: () -> Label)

    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public init(selection: Binding<Date>, in range: PartialRangeFrom<Date>, displayedComponents: DatePicker<Label>.Components = [.hourAndMinute, .date], @ViewBuilder label: () -> Label)

    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public init(selection: Binding<Date>, in range: PartialRangeThrough<Date>, displayedComponents: DatePicker<Label>.Components = [.hourAndMinute, .date], @ViewBuilder label: () -> Label)
}

@available(iOS 13.0, macOS 10.15, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension DatePicker where Label == Text {

    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public init(_ titleKey: LocalizedStringKey, selection: Binding<Date>, displayedComponents: DatePicker<Label>.Components = [.hourAndMinute, .date])

    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public init(_ titleKey: LocalizedStringKey, selection: Binding<Date>, in range: ClosedRange<Date>, displayedComponents: DatePicker<Label>.Components = [.hourAndMinute, .date])

    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public init(_ titleKey: LocalizedStringKey, selection: Binding<Date>, in range: PartialRangeFrom<Date>, displayedComponents: DatePicker<Label>.Components = [.hourAndMinute, .date])

    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public init(_ titleKey: LocalizedStringKey, selection: Binding<Date>, in range: PartialRangeThrough<Date>, displayedComponents: DatePicker<Label>.Components = [.hourAndMinute, .date])

    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public init<S>(_ title: S, selection: Binding<Date>, displayedComponents: DatePicker<Label>.Components = [.hourAndMinute, .date]) where S : StringProtocol

    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public init<S>(_ title: S, selection: Binding<Date>, in range: ClosedRange<Date>, displayedComponents: DatePicker<Label>.Components = [.hourAndMinute, .date]) where S : StringProtocol

    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public init<S>(_ title: S, selection: Binding<Date>, in range: PartialRangeFrom<Date>, displayedComponents: DatePicker<Label>.Components = [.hourAndMinute, .date]) where S : StringProtocol

    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public init<S>(_ title: S, selection: Binding<Date>, in range: PartialRangeThrough<Date>, displayedComponents: DatePicker<Label>.Components = [.hourAndMinute, .date]) where S : StringProtocol
}

@available(iOS 13.0, macOS 10.15, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct DatePickerComponents : OptionSet {

    public let rawValue: UInt

    public init(rawValue: UInt)

    public static let hourAndMinute: DatePickerComponents

    public static let date: DatePickerComponents

    public typealias ArrayLiteralElement = DatePickerComponents

    public typealias Element = DatePickerComponents

    public typealias RawValue = UInt
}

@available(iOS 13.0, macOS 10.15, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public protocol DatePickerStyle {

    associatedtype Body : View

    @ViewBuilder func makeBody(configuration: Self.Configuration) -> Self.Body

    @available(iOS 16.0, macOS 13.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    typealias Configuration = DatePickerStyleConfiguration
}

@available(iOS 13.0, macOS 10.15, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension DatePickerStyle where Self == DefaultDatePickerStyle {

    public static var automatic: DefaultDatePickerStyle { get }
}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension DatePickerStyle where Self == StepperFieldDatePickerStyle {

    public static var stepperField: StepperFieldDatePickerStyle { get }
}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension DatePickerStyle where Self == FieldDatePickerStyle {

    public static var field: FieldDatePickerStyle { get }
}

@available(iOS 14.0, macOS 10.15, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension DatePickerStyle where Self == GraphicalDatePickerStyle {

    public static var graphical: GraphicalDatePickerStyle { get }
}

@available(iOS 14.0, macCatalyst 13.4, macOS 10.15.4, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension DatePickerStyle where Self == CompactDatePickerStyle {

    public static var compact: CompactDatePickerStyle { get }
}

@available(iOS 16.0, macOS 13.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct DatePickerStyleConfiguration {

    public struct Label : View {

                        public typealias Body = Never
    }

    public let label: DatePickerStyleConfiguration.Label

    @Binding public var selection: Date { get nonmutating set }

    public var $selection: Binding<Date> { get }

    public var minimumDate: Date?

    public var maximumDate: Date?

    public var displayedComponents: DatePickerComponents
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public struct DefaultButtonStyle : PrimitiveButtonStyle {

    public init()

    public func makeBody(configuration: DefaultButtonStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS 13.0, macOS 10.15, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct DefaultDatePickerStyle : DatePickerStyle {

    public init()

    public func makeBody(configuration: DefaultDatePickerStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public struct DefaultDateProgressLabel : View {

    @MainActor public var body: some View { get }

    public typealias Body = some View
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public struct DefaultFocusEvaluationPriority {

    public static let automatic: DefaultFocusEvaluationPriority

    public static let userInitiated: DefaultFocusEvaluationPriority
}

@available(iOS 16.0, macOS 13.0, watchOS 7.0, *)
@available(tvOS, unavailable)
public struct DefaultGaugeStyle : GaugeStyle {

    public init()

    public func makeBody(configuration: DefaultGaugeStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct DefaultGroupBoxStyle : GroupBoxStyle {

    public init()

    public func makeBody(configuration: DefaultGroupBoxStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public struct DefaultLabelStyle : LabelStyle {

    public init()

    public func makeBody(configuration: DefaultLabelStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public struct DefaultListStyle : ListStyle {

    public init()
}

@available(iOS, unavailable)
@available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Use `menuStyle(.automatic)` instead.")
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct DefaultMenuButtonStyle : MenuButtonStyle {

    public init()
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct DefaultMenuStyle : MenuStyle {

    public init()

    public func makeBody(configuration: DefaultMenuStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS, introduced: 13.0, deprecated: 100000.0, message: "replace styled NavigationView with NavigationStack or NavigationSplitView instead")
@available(macOS, introduced: 10.15, deprecated: 100000.0, message: "replace styled NavigationView with NavigationSplitView instead")
@available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "replace styled NavigationView with NavigationStack or NavigationSplitView instead")
@available(watchOS, introduced: 7.0, deprecated: 100000.0, message: "replace styled NavigationView with NavigationStack or NavigationSplitView instead")
public struct DefaultNavigationViewStyle : NavigationViewStyle {

    public init()
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public struct DefaultPickerStyle : PickerStyle {

    public init()
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public struct DefaultProgressViewStyle : ProgressViewStyle {

    public init()

    public func makeBody(configuration: DefaultProgressViewStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS 16.0, macOS 13.0, watchOS 9.0, *)
@available(tvOS, unavailable)
public struct DefaultShareLinkLabel : View {

    @MainActor public var body: some View { get }

    public typealias Body = some View
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 7.0, *)
public struct DefaultTabViewStyle : TabViewStyle {

    public init()
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public struct DefaultTextFieldStyle : TextFieldStyle {

    public init()
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public struct DefaultToggleStyle : ToggleStyle {

    public init()

    public func makeBody(configuration: DefaultToggleStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(macOS 11.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct DefaultWindowStyle : WindowStyle {

    public init()
}

@available(macOS 11.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct DefaultWindowToolbarStyle : WindowToolbarStyle {

    public init()
}

@available(iOS 15.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct DisabledTextSelectability : TextSelectability {

    public static let allowsSelection: Bool
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct DisclosureGroup<Label, Content> : View where Label : View, Content : View {

    public init(@ViewBuilder content: @escaping () -> Content, @ViewBuilder label: () -> Label)

    public init(isExpanded: Binding<Bool>, @ViewBuilder content: @escaping () -> Content, @ViewBuilder label: () -> Label)

    @MainActor public var body: some View { get }

    public typealias Body = some View
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension DisclosureGroup where Label == Text {

    public init(_ titleKey: LocalizedStringKey, @ViewBuilder content: @escaping () -> Content)

    public init(_ titleKey: LocalizedStringKey, isExpanded: Binding<Bool>, @ViewBuilder content: @escaping () -> Content)

    public init<S>(_ label: S, @ViewBuilder content: @escaping () -> Content) where S : StringProtocol

    public init<S>(_ label: S, isExpanded: Binding<Bool>, @ViewBuilder content: @escaping () -> Content) where S : StringProtocol
}

@available(iOS 16.0, macOS 13.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public protocol DisclosureGroupStyle {

    associatedtype Body : View

    @ViewBuilder func makeBody(configuration: Self.Configuration) -> Self.Body

    typealias Configuration = DisclosureGroupStyleConfiguration
}

@available(iOS 16.0, macOS 13.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension DisclosureGroupStyle where Self == AutomaticDisclosureGroupStyle {

    public static var automatic: AutomaticDisclosureGroupStyle { get }
}

@available(iOS 16.0, macOS 13.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct DisclosureGroupStyleConfiguration {

    public struct Label : View {

                        public typealias Body = Never
    }

    public let label: DisclosureGroupStyleConfiguration.Label

    public struct Content : View {

                        public typealias Body = Never
    }

    public let content: DisclosureGroupStyleConfiguration.Content

    @Binding public var isExpanded: Bool { get nonmutating set }

    public var $isExpanded: Binding<Bool> { get }
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
public struct DismissAction {

    public func callAsFunction()
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
public struct DismissSearchAction {

    public func callAsFunction()
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public struct Divider : View {

    public init()

    public typealias Body = Never
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct DocumentGroup<Document, Content> : Scene where Content : View {

    @MainActor public var body: some Scene { get }

    public typealias Body = some Scene
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension DocumentGroup where Document : ReferenceFileDocument {

    public init(newDocument: @escaping () -> Document, @ViewBuilder editor: @escaping (ReferenceFileDocumentConfiguration<Document>) -> Content)

    public init(viewing documentType: Document.Type, @ViewBuilder viewer: @escaping (ReferenceFileDocumentConfiguration<Document>) -> Content)
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension DocumentGroup where Document : FileDocument {

    public init(newDocument: @autoclosure @escaping () -> Document, @ViewBuilder editor: @escaping (FileDocumentConfiguration<Document>) -> Content)

    public init(viewing documentType: Document.Type, @ViewBuilder viewer: @escaping (FileDocumentConfiguration<Document>) -> Content)
}

@available(iOS, introduced: 13.0, deprecated: 100000.0, message: "replace styled NavigationView with NavigationStack or NavigationSplitView instead")
@available(macOS, introduced: 10.15, deprecated: 100000.0, message: "replace styled NavigationView with NavigationSplitView instead")
@available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "replace styled NavigationView with NavigationStack or NavigationSplitView instead")
@available(watchOS, unavailable)
public struct DoubleColumnNavigationViewStyle : NavigationViewStyle {

    public init()
}

@available(iOS 13.0, macOS 10.15, watchOS 6.0, *)
@available(tvOS, unavailable)
public struct DragGesture : Gesture {

    public struct Value : Equatable {

            public var time: Date

            public var location: CGPoint

            public var startLocation: CGPoint

                        public var translation: CGSize { get }

                public var predictedEndLocation: CGPoint { get }

                public var predictedEndTranslation: CGSize { get }

                                        public static func == (a: DragGesture.Value, b: DragGesture.Value) -> Bool
    }

    public var minimumDistance: CGFloat

    public var coordinateSpace: CoordinateSpace

    public init(minimumDistance: CGFloat = 10, coordinateSpace: CoordinateSpace = .local)

    public typealias Body = Never
}

@available(iOS 13.4, macOS 10.15, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
@MainActor public protocol DropDelegate {

    @MainActor func validateDrop(info: DropInfo) -> Bool

    @MainActor func performDrop(info: DropInfo) -> Bool

    @MainActor func dropEntered(info: DropInfo)

    @MainActor func dropUpdated(info: DropInfo) -> DropProposal?

    @MainActor func dropExited(info: DropInfo)
}

@available(iOS 13.4, macOS 10.15, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension DropDelegate {

    @MainActor public func validateDrop(info: DropInfo) -> Bool

    @MainActor public func dropEntered(info: DropInfo)

    @MainActor public func dropUpdated(info: DropInfo) -> DropProposal?

    @MainActor public func dropExited(info: DropInfo)
}

@available(iOS 13.4, macOS 10.15, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct DropInfo {

    public var location: CGPoint { get }

    @available(iOS 14.0, macOS 11.0, *)
    public func hasItemsConforming(to contentTypes: [UTType]) -> Bool

    @available(iOS 14.0, macOS 11.0, *)
    public func itemProviders(for contentTypes: [UTType]) -> [NSItemProvider]
}

@available(iOS, introduced: 13.4, deprecated: 100000.0, message: "Provide `UTType`s as the `types` instead.")
@available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Provide `UTType`s as the `types` instead.")
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension DropInfo {

    public func hasItemsConforming(to types: [String]) -> Bool

    public func itemProviders(for types: [String]) -> [NSItemProvider]
}

@available(iOS 13.4, macOS 10.15, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public enum DropOperation {

    case cancel

    case forbidden

    case copy

    case move

    public static func == (a: DropOperation, b: DropOperation) -> Bool

    public func hash(into hasher: inout Hasher)

    public var hashValue: Int { get }
}

@available(iOS 13.4, macOS 10.15, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension DropOperation : Equatable {
}

@available(iOS 13.4, macOS 10.15, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension DropOperation : Hashable {
}

@available(iOS 13.4, macOS 10.15, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct DropProposal {

    public let operation: DropOperation

    public init(operation: DropOperation)
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public protocol DynamicProperty {

    mutating func update()
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension DynamicProperty {

    public mutating func update()
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public protocol DynamicTableRowContent : TableRowContent {

    associatedtype Data : Collection

    var data: Self.Data { get }
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension DynamicTableRowContent {

    public func onInsert(of supportedContentTypes: [UTType], perform action: @escaping (Int, [NSItemProvider]) -> Void) -> ModifiedContent<Self, OnInsertTableRowModifier>
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
public enum DynamicTypeSize : Hashable, Comparable, CaseIterable {

    case xSmall

    case small

    case medium

    case large

    case xLarge

    case xxLarge

    case xxxLarge

    case accessibility1

    case accessibility2

    case accessibility3

    case accessibility4

    case accessibility5

    public var isAccessibilitySize: Bool { get }

    public static func == (a: DynamicTypeSize, b: DynamicTypeSize) -> Bool

    public func hash(into hasher: inout Hasher)

    public static func < (a: DynamicTypeSize, b: DynamicTypeSize) -> Bool

    public typealias AllCases = [DynamicTypeSize]

    public static var allCases: [DynamicTypeSize] { get }

    public var hashValue: Int { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public protocol DynamicViewContent : View {

    associatedtype Data : Collection

    var data: Self.Data { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension DynamicViewContent {

    @inlinable public func onDelete(perform action: ((IndexSet) -> Void)?) -> some DynamicViewContent

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension DynamicViewContent {

    @available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
    public func onInsert(of supportedContentTypes: [UTType], perform action: @escaping (Int, [NSItemProvider]) -> Void) -> some DynamicViewContent


    @available(iOS, introduced: 13.0, deprecated: 100000.0, message: "Provide `UTType`s as the `supportedContentTypes` instead.")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Provide `UTType`s as the `supportedContentTypes` instead.")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "Provide `UTType`s as the `supportedContentTypes` instead.")
    @available(watchOS, introduced: 6.0, deprecated: 100000.0, message: "Provide `UTType`s as the `supportedContentTypes` instead.")
    public func onInsert(of acceptedTypeIdentifiers: [String], perform action: @escaping (Int, [NSItemProvider]) -> Void) -> some DynamicViewContent

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension DynamicViewContent {

    @inlinable public func onMove(perform action: ((IndexSet, Int) -> Void)?) -> some DynamicViewContent

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public enum Edge : Int8, CaseIterable {

    case top

    case leading

    case bottom

    case trailing

    @frozen public struct Set : OptionSet {

                        public typealias Element = Edge.Set

                                                                    public let rawValue: Int8

                                                                        public init(rawValue: Int8)

        public static let top: Edge.Set

        public static let leading: Edge.Set

        public static let bottom: Edge.Set

        public static let trailing: Edge.Set

        public static let all: Edge.Set

        public static let horizontal: Edge.Set

        public static let vertical: Edge.Set

            public init(_ e: Edge)

            public typealias ArrayLiteralElement = Edge.Set.Element

                                public typealias RawValue = Int8
    }

    public init?(rawValue: Int8)

    public typealias AllCases = [Edge]

    public typealias RawValue = Int8

    public static var allCases: [Edge] { get }

    public var rawValue: Int8 { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Edge : Equatable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Edge : Hashable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Edge : RawRepresentable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Edge : Sendable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Edge.Set : Sendable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct EdgeInsets : Equatable {

    public var top: CGFloat

    public var leading: CGFloat

    public var bottom: CGFloat

    public var trailing: CGFloat

    @inlinable public init(top: CGFloat, leading: CGFloat, bottom: CGFloat, trailing: CGFloat)

    @inlinable public init()

    public static func == (a: EdgeInsets, b: EdgeInsets) -> Bool
}

extension EdgeInsets {

    @available(iOS 14.0, macOS 11.0, tvOS 14.0, *)
    @available(watchOS, unavailable)
    public init(_ nsEdgeInsets: NSDirectionalEdgeInsets)
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension EdgeInsets : Animatable {

    public typealias AnimatableData = AnimatablePair<CGFloat, AnimatablePair<CGFloat, AnimatablePair<CGFloat, CGFloat>>>

    public var animatableData: EdgeInsets.AnimatableData
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension EdgeInsets : Sendable {
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public struct EditOperations<Data> : OptionSet {

    public let rawValue: Int

    public init(rawValue: Int)

    public static var all: EditOperations<Data> { get }

    public typealias ArrayLiteralElement = EditOperations<Data>

    public typealias Element = EditOperations<Data>

    public typealias RawValue = Int
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension EditOperations where Data : RangeReplaceableCollection {

    public static var delete: EditOperations<Data> { get }

    public static var all: EditOperations<Data> { get }
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension EditOperations where Data : MutableCollection {

    public static var move: EditOperations<Data> { get }

    public static var all: EditOperations<Data> { get }
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension EditOperations where Data : MutableCollection, Data : RangeReplaceableCollection {

    public static var all: EditOperations<Data> { get }
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public struct EditableCollectionContent<Content, Data> {
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension EditableCollectionContent : View where Content : View {

    @MainActor public var body: some View { get }

    public typealias Body = some View
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct Ellipse : Shape {

    public func path(in rect: CGRect) -> Path

    @inlinable public init()

    public typealias AnimatableData = EmptyAnimatableData

    public typealias Body
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Ellipse : InsettableShape {

    @inlinable public func inset(by amount: CGFloat) -> some InsettableShape


    public typealias InsetShape = some InsettableShape
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Ellipse : Sendable {
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
@frozen public struct EllipticalGradient : ShapeStyle, View {

    public init(gradient: Gradient, center: UnitPoint = .center, startRadiusFraction: CGFloat = 0, endRadiusFraction: CGFloat = 0.5)

    public init(colors: [Color], center: UnitPoint = .center, startRadiusFraction: CGFloat = 0, endRadiusFraction: CGFloat = 0.5)

    public init(stops: [Gradient.Stop], center: UnitPoint = .center, startRadiusFraction: CGFloat = 0, endRadiusFraction: CGFloat = 0.5)

    public typealias Body
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct EmptyAnimatableData : VectorArithmetic {

    @inlinable public init()

    @inlinable public static var zero: EmptyAnimatableData { get }

    @inlinable public static func += (lhs: inout EmptyAnimatableData, rhs: EmptyAnimatableData)

    @inlinable public static func -= (lhs: inout EmptyAnimatableData, rhs: EmptyAnimatableData)

    @inlinable public static func + (lhs: EmptyAnimatableData, rhs: EmptyAnimatableData) -> EmptyAnimatableData

    @inlinable public static func - (lhs: EmptyAnimatableData, rhs: EmptyAnimatableData) -> EmptyAnimatableData

    @inlinable public mutating func scale(by rhs: Double)

    @inlinable public var magnitudeSquared: Double { get }

    public static func == (a: EmptyAnimatableData, b: EmptyAnimatableData) -> Bool
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension EmptyAnimatableData : Sendable {
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct EmptyCommands : Commands {

    public init()

    public typealias Body = Never
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct EmptyModifier : ViewModifier {

    public static let identity: EmptyModifier

    public typealias Body = Never

    @inlinable public init()

    @MainActor public func body(content: EmptyModifier.Content) -> EmptyModifier.Body
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension EmptyModifier : Sendable {
}

@available(iOS 16.0, macOS 13.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct EmptyTableRowContent<Value> where Value : Identifiable {

    public typealias TableRowValue = Value

    public typealias TableRowBody = Never
}

@available(iOS 16.0, macOS 13.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension EmptyTableRowContent : TableRowContent {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct EmptyView : View {

    @inlinable public init()

    public typealias Body = Never
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension EmptyView : Sendable {
}

@available(iOS 14.0, macOS 11.0, watchOS 9.0, *)
@available(tvOS, unavailable)
@frozen public struct EmptyWidgetConfiguration : WidgetConfiguration {

    @inlinable public init()

    public typealias Body = Never
}

@available(iOS 14.0, macOS 11.0, watchOS 9.0, *)
@available(tvOS, unavailable)
extension EmptyWidgetConfiguration : Sendable {
}

@available(iOS 15.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct EnabledTextSelectability : TextSelectability {

    public static let allowsSelection: Bool
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen @propertyWrapper public struct Environment<Value> : DynamicProperty {

    @inlinable public init(_ keyPath: KeyPath<EnvironmentValues, Value>)

    @inlinable public var wrappedValue: Value { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public protocol EnvironmentKey {

    associatedtype Value

    static var defaultValue: Self.Value { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen @propertyWrapper public struct EnvironmentObject<ObjectType> : DynamicProperty where ObjectType : ObservableObject {

    @dynamicMemberLookup @frozen public struct Wrapper {

                            public subscript<Subject>(dynamicMember keyPath: ReferenceWritableKeyPath<ObjectType, Subject>) -> Binding<Subject> { get }
    }

    @inlinable @MainActor public var wrappedValue: ObjectType { get }

    @MainActor public var projectedValue: EnvironmentObject<ObjectType>.Wrapper { get }

    public init()
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public struct EnvironmentValues : CustomStringConvertible {

    public init()

    public subscript<K>(key: K.Type) -> K.Value where K : EnvironmentKey

    public var description: String { get }
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension EnvironmentValues {

    public var openURL: OpenURLAction
}

extension EnvironmentValues {

    @available(iOS, introduced: 13.0, deprecated: 100000.0, renamed: "dynamicTypeSize")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, renamed: "dynamicTypeSize")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, renamed: "dynamicTypeSize")
    @available(watchOS, introduced: 6.0, deprecated: 100000.0, renamed: "dynamicTypeSize")
    public var sizeCategory: ContentSizeCategory
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension EnvironmentValues {

    public var redactionReasons: RedactionReasons
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension EnvironmentValues {

    public var headerProminence: Prominence
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension EnvironmentValues {

    public var colorScheme: ColorScheme

    public var colorSchemeContrast: ColorSchemeContrast { get }
}

extension EnvironmentValues {

    @available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
    public var lineLimit: Int?
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension EnvironmentValues {

    public var layoutDirection: LayoutDirection
}

extension EnvironmentValues {

    @available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
    public var isFocused: Bool { get }
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension EnvironmentValues {

    public var symbolVariants: SymbolVariants
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension EnvironmentValues {

    public var menuOrder: MenuOrder
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension EnvironmentValues {

    public var undoManager: UndoManager? { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension EnvironmentValues {

    public var isEnabled: Bool
}

@available(macOS 12.0, tvOS 14.0, watchOS 7.0, *)
@available(iOS, unavailable)
extension EnvironmentValues {

    public var resetFocus: ResetFocusAction { get }
}

extension EnvironmentValues {

    @available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 8.0, *)
    public var autocorrectionDisabled: Bool { get }
}

extension EnvironmentValues {

    @available(iOS, introduced: 13.0, deprecated: 100000.0, renamed: "autocorrectionDisabled")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, renamed: "autocorrectionDisabled")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, renamed: "autocorrectionDisabled")
    @available(watchOS, introduced: 8.0, deprecated: 100000.0, renamed: "autocorrectionDisabled")
    public var disableAutocorrection: Bool?
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension EnvironmentValues {

    public var backgroundMaterial: Material?
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension EnvironmentValues {

    public var supportsMultipleWindows: Bool { get }
}

extension EnvironmentValues {

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public var rename: RenameAction? { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension EnvironmentValues {

    public var font: Font?

    public var displayScale: CGFloat

    @available(macOS 11.0, *)
    public var imageScale: Image.Scale

    public var pixelLength: CGFloat { get }

    public var legibilityWeight: LegibilityWeight?

    public var locale: Locale

    public var calendar: Calendar

    public var timeZone: TimeZone
}

extension EnvironmentValues {

    @available(macOS 10.15, *)
    @available(iOS, unavailable)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public var controlActiveState: ControlActiveState
}

extension EnvironmentValues {

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public var verticalScrollIndicatorVisibility: ScrollIndicatorVisibility { get }

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public var horizontalScrollIndicatorVisibility: ScrollIndicatorVisibility { get }
}

extension EnvironmentValues {

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public var isScrollEnabled: Bool
}

extension EnvironmentValues {

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public var scrollDismissesKeyboardMode: ScrollDismissesKeyboardMode
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension EnvironmentValues {

    public var isSearching: Bool { get }

    public var dismissSearch: DismissSearchAction { get }

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public var searchSuggestionsPlacement: SearchSuggestionsPlacement { get }
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension EnvironmentValues {

    public var scenePhase: ScenePhase
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension EnvironmentValues {

    public var contentTransition: ContentTransition

    public var contentTransitionAddsDrawingGroup: Bool
}

extension EnvironmentValues {

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public var accessibilityQuickActionsEnabled: Bool { get }
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension EnvironmentValues {

    public var refresh: RefreshAction? { get }
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension EnvironmentValues {

    public var symbolRenderingMode: SymbolRenderingMode?
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension EnvironmentValues {

    public var backgroundStyle: AnyShapeStyle?
}

@available(iOS 15.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension EnvironmentValues {

    public var keyboardShortcut: KeyboardShortcut? { get }
}

@available(macOS 13.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension EnvironmentValues {

    public var newDocument: NewDocumentAction { get }

    public var openDocument: OpenDocumentAction { get }
}

extension EnvironmentValues {

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public var accessibilityLargeContentViewerEnabled: Bool { get }
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension EnvironmentValues {

    public var dismiss: DismissAction { get }

    public var isPresented: Bool { get }
}

@available(iOS 15.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension EnvironmentValues {

    public var menuIndicatorVisibility: Visibility
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension EnvironmentValues {

    @available(iOS, introduced: 13.0, deprecated: 100000.0, message: "Use isPresented or dismiss")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Use isPresented or dismiss")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "Use isPresented or dismiss")
    @available(watchOS, introduced: 6.0, deprecated: 100000.0, message: "Use isPresented or dismiss")
    public var presentationMode: Binding<PresentationMode> { get }
}

@available(iOS 15.0, macOS 10.15, watchOS 9.0, *)
@available(tvOS, unavailable)
extension EnvironmentValues {

    @available(tvOS, unavailable)
    public var controlSize: ControlSize
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension EnvironmentValues {

    public var accessibilityDifferentiateWithoutColor: Bool { get }

    public var accessibilityReduceTransparency: Bool { get }

    public var accessibilityReduceMotion: Bool { get }

    public var accessibilityInvertColors: Bool { get }
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension EnvironmentValues {

    public var accessibilityShowButtonShapes: Bool { get }
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension EnvironmentValues {

    public var accessibilityVoiceOverEnabled: Bool { get }

    public var accessibilitySwitchControlEnabled: Bool { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension EnvironmentValues {

    public var multilineTextAlignment: TextAlignment

    public var truncationMode: Text.TruncationMode

    public var lineSpacing: CGFloat

    public var allowsTightening: Bool

    public var minimumScaleFactor: CGFloat

    @available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
    public var textCase: Text.Case?
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension EnvironmentValues {

    public var accessibilityEnabled: Bool
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension EnvironmentValues {

    public var dynamicTypeSize: DynamicTypeSize
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension EnvironmentValues {

    public var managedObjectContext: NSManagedObjectContext
}

@available(macOS 13.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension EnvironmentValues {

    public var openWindow: OpenWindowAction { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension EnvironmentValues {

    public var defaultMinListRowHeight: CGFloat

    public var defaultMinListHeaderHeight: CGFloat?
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public protocol EnvironmentalModifier : ViewModifier where Self.Body == Never {

    associatedtype ResolvedModifier : ViewModifier

    func resolve(in environment: EnvironmentValues) -> Self.ResolvedModifier
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct EquatableView<Content> : View where Content : Equatable, Content : View {

    public var content: Content

    @inlinable public init(content: Content)

    public typealias Body = Never
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct EventModifiers : OptionSet {

    public let rawValue: Int

    public init(rawValue: Int)

    public static let capsLock: EventModifiers

    public static let shift: EventModifiers

    public static let control: EventModifiers

    public static let option: EventModifiers

    public static let command: EventModifiers

    public static let numericPad: EventModifiers

    @available(iOS, deprecated: 15.0, message: "Function modifier is reserved for system applications")
    @available(macOS, deprecated: 12.0, message: "Function modifier is reserved for system applications")
    @available(tvOS, deprecated: 15.0, message: "Function modifier is reserved for system applications")
    @available(watchOS, deprecated: 8.0, message: "Function modifier is reserved for system applications")
    public static let function: EventModifiers

    public static let all: EventModifiers

    public typealias ArrayLiteralElement = EventModifiers

    public typealias Element = EventModifiers

    public typealias RawValue = Int
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension EventModifiers : Sendable {
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
public struct EveryMinuteTimelineSchedule : TimelineSchedule {

    public struct Entries : Sequence, IteratorProtocol {

                                                                                                                    public mutating func next() -> Date?

            public typealias Element = Date

                public typealias Iterator = EveryMinuteTimelineSchedule.Entries
    }

    public init()

    public func entries(from startDate: Date, mode: TimelineScheduleMode) -> EveryMinuteTimelineSchedule.Entries
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct ExclusiveGesture<First, Second> : Gesture where First : Gesture, Second : Gesture {

    @frozen public enum Value {

            case first(First.Value)

            case second(Second.Value)
    }

    public var first: First

    public var second: Second

    @inlinable public init(_ first: First, _ second: Second)

    public typealias Body = Never
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ExclusiveGesture.Value : Equatable where First.Value : Equatable, Second.Value : Equatable {

    public static func == (a: ExclusiveGesture<First, Second>.Value, b: ExclusiveGesture<First, Second>.Value) -> Bool
}

@available(macOS 11.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct ExpandedWindowToolbarStyle : WindowToolbarStyle {

    public init()
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
public struct ExplicitTimelineSchedule<Entries> : TimelineSchedule where Entries : Sequence, Entries.Element == Date {

    public init(_ dates: Entries)

    public func entries(from startDate: Date, mode: TimelineScheduleMode) -> Entries
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@propertyWrapper @MainActor public struct FetchRequest<Result> where Result : NSFetchRequestResult {

    @MainActor public var wrappedValue: FetchedResults<Result> { get }

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public struct Configuration {

                                                                public var nsSortDescriptors: [NSSortDescriptor]

                                            public var nsPredicate: NSPredicate?
    }

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    @MainActor public var projectedValue: Binding<FetchRequest<Result>.Configuration> { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension FetchRequest : DynamicProperty {

    @MainActor public mutating func update()
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension FetchRequest {

    @MainActor public init(entity: NSEntityDescription, sortDescriptors: [NSSortDescriptor], predicate: NSPredicate? = nil, animation: Animation? = nil)

    @MainActor public init(fetchRequest: NSFetchRequest<Result>, animation: Animation? = nil)

    @MainActor public init(fetchRequest: NSFetchRequest<Result>, transaction: Transaction)
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension FetchRequest where Result : NSManagedObject {

    @MainActor public init(sortDescriptors: [NSSortDescriptor], predicate: NSPredicate? = nil, animation: Animation? = nil)
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension FetchRequest where Result : NSManagedObject {

    @MainActor public init(sortDescriptors: [SortDescriptor<Result>], predicate: NSPredicate? = nil, animation: Animation? = nil)
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension FetchRequest.Configuration where Result : NSManagedObject {

    public var sortDescriptors: [SortDescriptor<Result>]
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public struct FetchedResults<Result> : RandomAccessCollection where Result : NSFetchRequestResult {

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public var nsSortDescriptors: [NSSortDescriptor] { get nonmutating set }

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public var nsPredicate: NSPredicate? { get nonmutating set }

    public var startIndex: Int { get }

    public var endIndex: Int { get }

    public subscript(position: Int) -> Result { get }

    public typealias Element = Result

    public typealias Index = Int

    public typealias Indices = Range<Int>

    public typealias Iterator = IndexingIterator<FetchedResults<Result>>

    public typealias SubSequence = Slice<FetchedResults<Result>>
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension FetchedResults where Result : NSManagedObject {

    public var sortDescriptors: [SortDescriptor<Result>] { get nonmutating set }
}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct FieldDatePickerStyle : DatePickerStyle {

    public init()

    public func makeBody(configuration: FieldDatePickerStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public protocol FileDocument {

    static var readableContentTypes: [UTType] { get }

    static var writableContentTypes: [UTType] { get }

    init(configuration: Self.ReadConfiguration) throws

    typealias ReadConfiguration = FileDocumentReadConfiguration

    func fileWrapper(configuration: Self.WriteConfiguration) throws -> FileWrapper

    typealias WriteConfiguration = FileDocumentWriteConfiguration
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension FileDocument {

    public static var writableContentTypes: [UTType] { get }
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct FileDocumentConfiguration<Document> where Document : FileDocument {

    @Binding public var document: Document { get nonmutating set }

    public var $document: Binding<Document> { get }

    public var fileURL: URL?

    public var isEditable: Bool
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct FileDocumentReadConfiguration {

    public let contentType: UTType

    public let file: FileWrapper
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct FileDocumentWriteConfiguration {

    public let contentType: UTType

    public let existingFile: FileWrapper?
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct FillStyle : Equatable {

    public var isEOFilled: Bool

    public var isAntialiased: Bool

    @inlinable public init(eoFill: Bool = false, antialiased: Bool = true)

    public static func == (a: FillStyle, b: FillStyle) -> Bool
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension FillStyle : Sendable {
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
@frozen @propertyWrapper public struct FocusState<Value> : DynamicProperty where Value : Hashable {

    @frozen @propertyWrapper public struct Binding {

            public var wrappedValue: Value { get nonmutating set }

                        public var projectedValue: FocusState<Value>.Binding { get }
    }

    public var wrappedValue: Value { get nonmutating set }

    public var projectedValue: FocusState<Value>.Binding { get }

    public init() where Value == Bool

    public init<T>() where Value == T?, T : Hashable
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
@propertyWrapper public struct FocusedBinding<Value> : DynamicProperty {

    public init(_ keyPath: KeyPath<FocusedValues, Binding<Value>?>)

    @inlinable public var wrappedValue: Value? { get nonmutating set }

    public var projectedValue: Binding<Value?> { get }
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
@propertyWrapper public struct FocusedValue<Value> : DynamicProperty {

    public init(_ keyPath: KeyPath<FocusedValues, Value?>)

    @inlinable public var wrappedValue: Value? { get }
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public protocol FocusedValueKey {

    associatedtype Value
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public struct FocusedValues {

    public subscript<Key>(key: Key.Type) -> Key.Value? where Key : FocusedValueKey
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension FocusedValues : Equatable {

    public static func == (lhs: FocusedValues, rhs: FocusedValues) -> Bool
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct Font : Hashable {

    public func hash(into hasher: inout Hasher)

    public static func == (lhs: Font, rhs: Font) -> Bool

    public var hashValue: Int { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Font {

    public static func custom(_ name: String, size: CGFloat) -> Font

    @available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
    public static func custom(_ name: String, size: CGFloat, relativeTo textStyle: Font.TextStyle) -> Font

    @available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
    public static func custom(_ name: String, fixedSize: CGFloat) -> Font

    public init(_ font: CTFont)
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Font {

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public static func system(size: CGFloat, weight: Font.Weight? = nil, design: Font.Design? = nil) -> Font

    @available(iOS, introduced: 13.0, deprecated: 100000.0, message: "Use `system(size:weight:design:)` instead.")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Use `system(size:weight:design:)` instead.")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "Use `system(size:weight:design:)` instead.")
    @available(watchOS, introduced: 6.0, deprecated: 100000.0, message: "Use `system(size:weight:design:)` instead.")
    public static func system(size: CGFloat, weight: Font.Weight = .regular, design: Font.Design = .default) -> Font

    public enum Design : Hashable {

        case `default`

        @available(watchOS 7.0, *)
        case serif

        case rounded

        @available(watchOS 7.0, *)
        case monospaced

                                        public static func == (a: Font.Design, b: Font.Design) -> Bool

                                                            public func hash(into hasher: inout Hasher)

                                    public var hashValue: Int { get }
    }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Font {

    public static let largeTitle: Font

    public static let title: Font

    @available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
    public static let title2: Font

    @available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
    public static let title3: Font

    public static let headline: Font

    public static let subheadline: Font

    public static let body: Font

    public static let callout: Font

    public static let footnote: Font

    public static let caption: Font

    @available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
    public static let caption2: Font

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public static func system(_ style: Font.TextStyle, design: Font.Design? = nil, weight: Font.Weight? = nil) -> Font

    @available(iOS, introduced: 13.0, deprecated: 100000.0, message: "Use `system(_:design:weight:)` instead.")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Use `system(_:design:weight:)` instead.")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "Use `system(_:design:weight:)` instead.")
    @available(watchOS, introduced: 6.0, deprecated: 100000.0, message: "Use `system(_:design:weight:)` instead.")
    public static func system(_ style: Font.TextStyle, design: Font.Design = .default) -> Font

    public enum TextStyle : CaseIterable {

            case largeTitle

            case title

            @available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
        case title2

            @available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
        case title3

            case headline

            case subheadline

            case body

            case callout

            case footnote

            case caption

            @available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
        case caption2

            public static var allCases: [Font.TextStyle]

                                        public static func == (a: Font.TextStyle, b: Font.TextStyle) -> Bool

                                                            public func hash(into hasher: inout Hasher)

            public typealias AllCases = [Font.TextStyle]

                                    public var hashValue: Int { get }
    }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Font {

    public func italic() -> Font

    public func smallCaps() -> Font

    public func lowercaseSmallCaps() -> Font

    public func uppercaseSmallCaps() -> Font

    public func monospacedDigit() -> Font

    public func weight(_ weight: Font.Weight) -> Font

    public func bold() -> Font

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public func monospaced() -> Font

    @available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
    public func leading(_ leading: Font.Leading) -> Font

    @frozen public struct Weight : Hashable {

        public static let ultraLight: Font.Weight

        public static let thin: Font.Weight

        public static let light: Font.Weight

        public static let regular: Font.Weight

        public static let medium: Font.Weight

        public static let semibold: Font.Weight

        public static let bold: Font.Weight

        public static let heavy: Font.Weight

        public static let black: Font.Weight

                                                            public func hash(into hasher: inout Hasher)

                                        public static func == (a: Font.Weight, b: Font.Weight) -> Bool

                                    public var hashValue: Int { get }
    }

    @available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
    public enum Leading {

                            case standard

                        case tight

                        case loose

                                        public static func == (a: Font.Leading, b: Font.Leading) -> Bool

                                                            public func hash(into hasher: inout Hasher)

                                    public var hashValue: Int { get }
    }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Font.TextStyle : Equatable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Font.TextStyle : Hashable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Font.Weight : Sendable {
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension Font.Leading : Equatable {
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension Font.Leading : Hashable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public struct ForEach<Data, ID, Content> where Data : RandomAccessCollection, ID : Hashable {

    public var data: Data

    public var content: (Data.Element) -> Content
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension ForEach : AccessibilityRotorContent where Content : AccessibilityRotorContent {

    public var body: Never { get }
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension ForEach where ID == Data.Element.ID, Content : AccessibilityRotorContent, Data.Element : Identifiable {

    public init(_ data: Data, @AccessibilityRotorContentBuilder content: @escaping (Data.Element) -> Content)
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension ForEach where Content : AccessibilityRotorContent {

    public init(_ data: Data, id: KeyPath<Data.Element, ID>, @AccessibilityRotorContentBuilder content: @escaping (Data.Element) -> Content)
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension ForEach {

    public init<C, R>(_ data: Binding<C>, edits: EditOperations<C>, @ViewBuilder content: @escaping (Binding<C.Element>) -> R) where Data == IndexedIdentifierCollection<C, ID>, ID == C.Element.ID, Content == EditableCollectionContent<R, C>, C : MutableCollection, C : RandomAccessCollection, R : View, C.Element : Identifiable, C.Index : Hashable

    public init<C, R>(_ data: Binding<C>, id: KeyPath<C.Element, ID>, edits: EditOperations<C>, @ViewBuilder content: @escaping (Binding<C.Element>) -> R) where Data == IndexedIdentifierCollection<C, ID>, Content == EditableCollectionContent<R, C>, C : MutableCollection, C : RandomAccessCollection, R : View, C.Index : Hashable
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ForEach : View where Content : View {

    public typealias Body = Never
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ForEach where ID == Data.Element.ID, Content : View, Data.Element : Identifiable {

    public init(_ data: Data, @ViewBuilder content: @escaping (Data.Element) -> Content)
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ForEach where Content : View {

    public init(_ data: Data, id: KeyPath<Data.Element, ID>, @ViewBuilder content: @escaping (Data.Element) -> Content)
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ForEach where Content : View {

    public init<C>(_ data: Binding<C>, @ViewBuilder content: @escaping (Binding<C.Element>) -> Content) where Data == LazyMapSequence<C.Indices, (C.Index, ID)>, ID == C.Element.ID, C : MutableCollection, C : RandomAccessCollection, C.Element : Identifiable, C.Index : Hashable

    public init<C>(_ data: Binding<C>, id: KeyPath<C.Element, ID>, @ViewBuilder content: @escaping (Binding<C.Element>) -> Content) where Data == LazyMapSequence<C.Indices, (C.Index, ID)>, C : MutableCollection, C : RandomAccessCollection, C.Index : Hashable
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ForEach where Data == Range<Int>, ID == Int, Content : View {

    public init(_ data: Range<Int>, @ViewBuilder content: @escaping (Int) -> Content)
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ForEach : DynamicViewContent where Content : View {
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension ForEach : TableRowContent where Content : TableRowContent {

    public typealias TableRowValue = Content.TableRowValue

    public typealias TableRowBody = Never

    public init<V>(_ data: Data, @TableRowBuilder<V> content: @escaping (Data.Element) -> Content) where ID == Data.Element.ID, V == Content.TableRowValue, Data.Element : Identifiable

    public init<V>(_ data: Data, id: KeyPath<Data.Element, ID>, @TableRowBuilder<V> content: @escaping (Data.Element) -> Content) where V == Content.TableRowValue

    public init<V>(_ data: Range<Int>, @TableRowBuilder<V> content: @escaping (Int) -> Content) where Data == Range<Int>, ID == Int, V == Content.TableRowValue
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension ForEach : DynamicTableRowContent where Content : TableRowContent {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct ForegroundStyle : ShapeStyle {

    @inlinable public init()
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ForegroundStyle : Sendable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public struct Form<Content> : View where Content : View {

    public init(@ViewBuilder content: () -> Content)

    @MainActor public var body: some View { get }

    public typealias Body = some View
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension Form where Content == FormStyleConfiguration.Content {

    public init(_ configuration: FormStyleConfiguration)
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public protocol FormStyle {

    associatedtype Body : View

    @ViewBuilder func makeBody(configuration: Self.Configuration) -> Self.Body

    typealias Configuration = FormStyleConfiguration
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension FormStyle where Self == ColumnsFormStyle {

    public static var columns: ColumnsFormStyle { get }
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension FormStyle where Self == GroupedFormStyle {

    public static var grouped: GroupedFormStyle { get }
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension FormStyle where Self == AutomaticFormStyle {

    public static var automatic: AutomaticFormStyle { get }
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public struct FormStyleConfiguration {

    public struct Content : View {

                        public typealias Body = Never
    }

    public let content: FormStyleConfiguration.Content
}

@available(iOS 16.0, macOS 13.0, watchOS 7.0, *)
@available(tvOS, unavailable)
public struct Gauge<Label, CurrentValueLabel, BoundsLabel, MarkedValueLabels> : View where Label : View, CurrentValueLabel : View, BoundsLabel : View, MarkedValueLabels : View {

    public init<V>(value: V, in bounds: ClosedRange<V> = 0...1, @ViewBuilder label: () -> Label) where CurrentValueLabel == EmptyView, BoundsLabel == EmptyView, MarkedValueLabels == EmptyView, V : BinaryFloatingPoint

    public init<V>(value: V, in bounds: ClosedRange<V> = 0...1, @ViewBuilder label: () -> Label, @ViewBuilder currentValueLabel: () -> CurrentValueLabel) where BoundsLabel == EmptyView, MarkedValueLabels == EmptyView, V : BinaryFloatingPoint

    public init<V>(value: V, in bounds: ClosedRange<V> = 0...1, @ViewBuilder label: () -> Label, @ViewBuilder currentValueLabel: () -> CurrentValueLabel, @ViewBuilder minimumValueLabel: () -> BoundsLabel, @ViewBuilder maximumValueLabel: () -> BoundsLabel) where MarkedValueLabels == EmptyView, V : BinaryFloatingPoint

    public init<V>(value: V, in bounds: ClosedRange<V> = 0...1, @ViewBuilder label: () -> Label, @ViewBuilder currentValueLabel: () -> CurrentValueLabel, @ViewBuilder markedValueLabels: () -> MarkedValueLabels) where BoundsLabel == EmptyView, V : BinaryFloatingPoint

    public init<V>(value: V, in bounds: ClosedRange<V> = 0...1, @ViewBuilder label: () -> Label, @ViewBuilder currentValueLabel: () -> CurrentValueLabel, @ViewBuilder minimumValueLabel: () -> BoundsLabel, @ViewBuilder maximumValueLabel: () -> BoundsLabel, @ViewBuilder markedValueLabels: () -> MarkedValueLabels) where V : BinaryFloatingPoint

    @MainActor public var body: some View { get }

    public typealias Body = some View
}

@available(iOS 16.0, macOS 13.0, watchOS 7.0, *)
@available(tvOS, unavailable)
public protocol GaugeStyle {

    associatedtype Body : View

    @ViewBuilder func makeBody(configuration: Self.Configuration) -> Self.Body

    typealias Configuration = GaugeStyleConfiguration
}

@available(iOS 16.0, macOS 13.0, watchOS 9.0, *)
@available(tvOS, unavailable)
extension GaugeStyle where Self == AccessoryCircularCapacityGaugeStyle {

    public static var accessoryCircularCapacity: AccessoryCircularCapacityGaugeStyle { get }
}

@available(iOS 16.0, macOS 13.0, watchOS 9.0, *)
@available(tvOS, unavailable)
extension GaugeStyle where Self == AccessoryLinearCapacityGaugeStyle {

    public static var accessoryLinearCapacity: AccessoryLinearCapacityGaugeStyle { get }
}

@available(iOS 16.0, macOS 13.0, watchOS 7.0, *)
@available(tvOS, unavailable)
extension GaugeStyle where Self == DefaultGaugeStyle {

    public static var automatic: DefaultGaugeStyle { get }
}

@available(iOS 16.0, macOS 13.0, watchOS 9.0, *)
@available(tvOS, unavailable)
extension GaugeStyle where Self == AccessoryCircularGaugeStyle {

    public static var accessoryCircular: AccessoryCircularGaugeStyle { get }
}

@available(iOS 16.0, macOS 13.0, watchOS 9.0, *)
@available(tvOS, unavailable)
extension GaugeStyle where Self == LinearCapacityGaugeStyle {

    public static var linearCapacity: LinearCapacityGaugeStyle { get }
}

@available(iOS 16.0, macOS 13.0, watchOS 9.0, *)
@available(tvOS, unavailable)
extension GaugeStyle where Self == AccessoryLinearGaugeStyle {

    public static var accessoryLinear: AccessoryLinearGaugeStyle { get }
}

@available(iOS 16.0, macOS 13.0, watchOS 7.0, *)
@available(tvOS, unavailable)
public struct GaugeStyleConfiguration {

    public struct Label : View {

                        public typealias Body = Never
    }

    public struct CurrentValueLabel : View {

                        public typealias Body = Never
    }

    public struct MinimumValueLabel : View {

                        public typealias Body = Never
    }

    public struct MaximumValueLabel : View {

                        public typealias Body = Never
    }

    public struct MarkedValueLabel : View {

                        public typealias Body = Never
    }

    public var value: Double

    public var label: GaugeStyleConfiguration.Label

    public var currentValueLabel: GaugeStyleConfiguration.CurrentValueLabel?

    public var minimumValueLabel: GaugeStyleConfiguration.MinimumValueLabel?

    public var maximumValueLabel: GaugeStyleConfiguration.MaximumValueLabel?
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public protocol GeometryEffect : Animatable, ViewModifier where Self.Body == Never {

    func effectValue(size: CGSize) -> ProjectionTransform
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension GeometryEffect {

    @inlinable public func ignoredByLayout() -> _IgnoredByLayoutEffect<Self>
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public struct GeometryProxy {

    public var size: CGSize { get }

    public subscript<T>(anchor: Anchor<T>) -> T { get }

    public var safeAreaInsets: EdgeInsets { get }

    public func frame(in coordinateSpace: CoordinateSpace) -> CGRect
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct GeometryReader<Content> : View where Content : View {

    public var content: (GeometryProxy) -> Content

    @inlinable public init(@ViewBuilder content: @escaping (GeometryProxy) -> Content)

    public typealias Body = Never
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public protocol Gesture {

    associatedtype Value

    associatedtype Body : Gesture

    var body: Self.Body { get }
}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension Gesture {

    @available(iOS, unavailable)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func modifiers(_ modifiers: EventModifiers) -> _ModifiersGesture<Self>
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Gesture {

    public func onEnded(_ action: @escaping (Self.Value) -> Void) -> _EndedGesture<Self>
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Gesture where Self.Value : Equatable {

    public func onChanged(_ action: @escaping (Self.Value) -> Void) -> _ChangedGesture<Self>
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Gesture {

    @inlinable public func simultaneously<Other>(with other: Other) -> SimultaneousGesture<Self, Other> where Other : Gesture
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Gesture {

    public func map<T>(_ body: @escaping (Self.Value) -> T) -> _MapGesture<Self, T>
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Gesture {

    @inlinable public func exclusively<Other>(before other: Other) -> ExclusiveGesture<Self, Other> where Other : Gesture
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Gesture {

    @inlinable public func sequenced<Other>(before other: Other) -> SequenceGesture<Self, Other> where Other : Gesture
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Gesture {

    @inlinable public func updating<State>(_ state: GestureState<State>, body: @escaping (Self.Value, inout State, inout Transaction) -> Void) -> GestureStateGesture<Self, State>
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct GestureMask : OptionSet {

    public let rawValue: UInt32

    public init(rawValue: UInt32)

    public static let none: GestureMask

    public static let gesture: GestureMask

    public static let subviews: GestureMask

    public static let all: GestureMask

    public typealias ArrayLiteralElement = GestureMask

    public typealias Element = GestureMask

    public typealias RawValue = UInt32
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension GestureMask : Sendable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@propertyWrapper @frozen public struct GestureState<Value> : DynamicProperty {

    public init(wrappedValue: Value)

    public init(initialValue: Value)

    public init(wrappedValue: Value, resetTransaction: Transaction)

    public init(initialValue: Value, resetTransaction: Transaction)

    public init(wrappedValue: Value, reset: @escaping (Value, inout Transaction) -> Void)

    public init(initialValue: Value, reset: @escaping (Value, inout Transaction) -> Void)

    public var wrappedValue: Value { get }

    public var projectedValue: GestureState<Value> { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension GestureState where Value : ExpressibleByNilLiteral {

    public init(resetTransaction: Transaction = Transaction())

    public init(reset: @escaping (Value, inout Transaction) -> Void)
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct GestureStateGesture<Base, State> : Gesture where Base : Gesture {

    public typealias Value = Base.Value

    public var base: Base

    public var state: GestureState<State>

    public var body: (GestureStateGesture<Base, State>.Value, inout State, inout Transaction) -> Void

    @inlinable public init(base: Base, state: GestureState<State>, body: @escaping (GestureStateGesture<Base, State>.Value, inout State, inout Transaction) -> Void)

    public typealias Body = Never
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct Gradient : Equatable {

    @frozen public struct Stop : Equatable {

            public var color: Color

                    public var location: CGFloat

            public init(color: Color, location: CGFloat)

                                        public static func == (a: Gradient.Stop, b: Gradient.Stop) -> Bool
    }

    public var stops: [Gradient.Stop]

    public init(stops: [Gradient.Stop])

    public init(colors: [Color])

    public static func == (a: Gradient, b: Gradient) -> Bool
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension Gradient : Hashable {

    public func hash(into hasher: inout Hasher)

    public var hashValue: Int { get }
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension Gradient : ShapeStyle {
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension Gradient {

    public struct ColorSpace : Hashable {

            public static let device: Gradient.ColorSpace

            public static let perceptual: Gradient.ColorSpace

                                                            public func hash(into hasher: inout Hasher)

                                        public static func == (a: Gradient.ColorSpace, b: Gradient.ColorSpace) -> Bool

                                    public var hashValue: Int { get }
    }

    public func colorSpace(_ space: Gradient.ColorSpace) -> AnyGradient
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension Gradient.Stop : Hashable {

    public func hash(into hasher: inout Hasher)

    public var hashValue: Int { get }
}

@available(iOS 14.0, macOS 10.15, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct GraphicalDatePickerStyle : DatePickerStyle {

    public init()

    public func makeBody(configuration: GraphicalDatePickerStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
@frozen public struct GraphicsContext {

    @frozen public struct BlendMode : RawRepresentable, Equatable {

                                                                    public let rawValue: Int32

                                                                        @inlinable public init(rawValue: Int32)

                        @inlinable public static var normal: GraphicsContext.BlendMode { get }

                            @inlinable public static var multiply: GraphicsContext.BlendMode { get }

                            @inlinable public static var screen: GraphicsContext.BlendMode { get }

                                            @inlinable public static var overlay: GraphicsContext.BlendMode { get }

                                @inlinable public static var darken: GraphicsContext.BlendMode { get }

                                @inlinable public static var lighten: GraphicsContext.BlendMode { get }

                            @inlinable public static var colorDodge: GraphicsContext.BlendMode { get }

                            @inlinable public static var colorBurn: GraphicsContext.BlendMode { get }

                                                                @inlinable public static var softLight: GraphicsContext.BlendMode { get }

                                                            @inlinable public static var hardLight: GraphicsContext.BlendMode { get }

                            @inlinable public static var difference: GraphicsContext.BlendMode { get }

                            @inlinable public static var exclusion: GraphicsContext.BlendMode { get }

                @inlinable public static var hue: GraphicsContext.BlendMode { get }

                            @inlinable public static var saturation: GraphicsContext.BlendMode { get }

                            @inlinable public static var color: GraphicsContext.BlendMode { get }

                            @inlinable public static var luminosity: GraphicsContext.BlendMode { get }

                                @inlinable public static var clear: GraphicsContext.BlendMode { get }

                                                    @inlinable public static var copy: GraphicsContext.BlendMode { get }

                                    @inlinable public static var sourceIn: GraphicsContext.BlendMode { get }

                                    @inlinable public static var sourceOut: GraphicsContext.BlendMode { get }

                                            @inlinable public static var sourceAtop: GraphicsContext.BlendMode { get }

                                        @inlinable public static var destinationOver: GraphicsContext.BlendMode { get }

                                    @inlinable public static var destinationIn: GraphicsContext.BlendMode { get }

                                    @inlinable public static var destinationOut: GraphicsContext.BlendMode { get }

                                                @inlinable public static var destinationAtop: GraphicsContext.BlendMode { get }

                                                        @inlinable public static var xor: GraphicsContext.BlendMode { get }

                                        @inlinable public static var plusDarker: GraphicsContext.BlendMode { get }

                                    @inlinable public static var plusLighter: GraphicsContext.BlendMode { get }

                                public typealias RawValue = Int32
    }

    public var opacity: Double

    public var blendMode: GraphicsContext.BlendMode

    public var environment: EnvironmentValues { get }

    public var transform: CGAffineTransform

    public mutating func scaleBy(x: CGFloat, y: CGFloat)

    public mutating func translateBy(x: CGFloat, y: CGFloat)

    public mutating func rotate(by angle: Angle)

    public mutating func concatenate(_ matrix: CGAffineTransform)

    @frozen public struct ClipOptions : OptionSet {

                                                                    public let rawValue: UInt32

                                                                        @inlinable public init(rawValue: UInt32)

                        @inlinable public static var inverse: GraphicsContext.ClipOptions { get }

            public typealias ArrayLiteralElement = GraphicsContext.ClipOptions

                        public typealias Element = GraphicsContext.ClipOptions

                                public typealias RawValue = UInt32
    }

    public var clipBoundingRect: CGRect { get }

    public mutating func clip(to path: Path, style: FillStyle = FillStyle(), options: GraphicsContext.ClipOptions = ClipOptions())

    public mutating func clipToLayer(opacity: Double = 1, options: GraphicsContext.ClipOptions = ClipOptions(), content: (inout GraphicsContext) throws -> Void) rethrows

    public struct Filter {

                                    public static func projectionTransform(_ matrix: ProjectionTransform) -> GraphicsContext.Filter

                                                                                            public static func shadow(color: Color = Color(.sRGBLinear, white: 0, opacity: 0.33), radius: CGFloat, x: CGFloat = 0, y: CGFloat = 0, blendMode: GraphicsContext.BlendMode = .normal, options: GraphicsContext.ShadowOptions = ShadowOptions()) -> GraphicsContext.Filter

                                    public static func colorMultiply(_ color: Color) -> GraphicsContext.Filter

                                                                                public static func colorMatrix(_ matrix: ColorMatrix) -> GraphicsContext.Filter

                                            public static func hueRotation(_ angle: Angle) -> GraphicsContext.Filter

                                                public static func saturation(_ amount: Double) -> GraphicsContext.Filter

                                                        public static func brightness(_ amount: Double) -> GraphicsContext.Filter

                                                public static func contrast(_ amount: Double) -> GraphicsContext.Filter

                                                public static func colorInvert(_ amount: Double = 1) -> GraphicsContext.Filter

                                                public static func grayscale(_ amount: Double) -> GraphicsContext.Filter

                                        public static var luminanceToAlpha: GraphicsContext.Filter { get }

                                    public static func blur(radius: CGFloat, options: GraphicsContext.BlurOptions = BlurOptions()) -> GraphicsContext.Filter

                                                            public static func alphaThreshold(min: Double, max: Double = 1, color: Color = Color.black) -> GraphicsContext.Filter
    }

    @frozen public struct ShadowOptions : OptionSet {

                                                                    public let rawValue: UInt32

                                                                        @inlinable public init(rawValue: UInt32)

                @inlinable public static var shadowAbove: GraphicsContext.ShadowOptions { get }

                @inlinable public static var shadowOnly: GraphicsContext.ShadowOptions { get }

                            @inlinable public static var invertsAlpha: GraphicsContext.ShadowOptions { get }

                @inlinable public static var disablesGroup: GraphicsContext.ShadowOptions { get }

            public typealias ArrayLiteralElement = GraphicsContext.ShadowOptions

                        public typealias Element = GraphicsContext.ShadowOptions

                                public typealias RawValue = UInt32
    }

    @frozen public struct BlurOptions : OptionSet {

                                                                    public let rawValue: UInt32

                                                                        @inlinable public init(rawValue: UInt32)

                                @inlinable public static var opaque: GraphicsContext.BlurOptions { get }

                @inlinable public static var dithersResult: GraphicsContext.BlurOptions { get }

            public typealias ArrayLiteralElement = GraphicsContext.BlurOptions

                        public typealias Element = GraphicsContext.BlurOptions

                                public typealias RawValue = UInt32
    }

    @frozen public struct FilterOptions : OptionSet {

                                                                    public let rawValue: UInt32

                                                                        @inlinable public init(rawValue: UInt32)

                @inlinable public static var linearColor: GraphicsContext.FilterOptions { get }

            public typealias ArrayLiteralElement = GraphicsContext.FilterOptions

                        public typealias Element = GraphicsContext.FilterOptions

                                public typealias RawValue = UInt32
    }

    public mutating func addFilter(_ filter: GraphicsContext.Filter, options: GraphicsContext.FilterOptions = FilterOptions())

    public struct Shading {

            public static var backdrop: GraphicsContext.Shading { get }

                public static var foreground: GraphicsContext.Shading { get }

                                public static func palette(_ array: [GraphicsContext.Shading]) -> GraphicsContext.Shading

                            public static func color(_ color: Color) -> GraphicsContext.Shading

                                                        public static func color(_ colorSpace: Color.RGBColorSpace = .sRGB, red: Double, green: Double, blue: Double, opacity: Double = 1) -> GraphicsContext.Shading

                                                    public static func color(_ colorSpace: Color.RGBColorSpace = .sRGB, white: Double, opacity: Double = 1) -> GraphicsContext.Shading

                                                public static func style<S>(_ style: S) -> GraphicsContext.Shading where S : ShapeStyle

                                                            public static func linearGradient(_ gradient: Gradient, startPoint: CGPoint, endPoint: CGPoint, options: GraphicsContext.GradientOptions = GradientOptions()) -> GraphicsContext.Shading

                                                        public static func radialGradient(_ gradient: Gradient, center: CGPoint, startRadius: CGFloat, endRadius: CGFloat, options: GraphicsContext.GradientOptions = GradientOptions()) -> GraphicsContext.Shading

                                                        public static func conicGradient(_ gradient: Gradient, center: CGPoint, angle: Angle = Angle(), options: GraphicsContext.GradientOptions = GradientOptions()) -> GraphicsContext.Shading

                                                        public static func tiledImage(_ image: Image, origin: CGPoint = .zero, sourceRect: CGRect = CGRect(x: 0, y: 0, width: 1, height: 1), scale: CGFloat = 1) -> GraphicsContext.Shading
    }

    @frozen public struct GradientOptions : OptionSet {

                                                                    public let rawValue: UInt32

                                                                        @inlinable public init(rawValue: UInt32)

                                                @inlinable public static var `repeat`: GraphicsContext.GradientOptions { get }

                                                    @inlinable public static var mirror: GraphicsContext.GradientOptions { get }

            @inlinable public static var linearColor: GraphicsContext.GradientOptions { get }

            public typealias ArrayLiteralElement = GraphicsContext.GradientOptions

                        public typealias Element = GraphicsContext.GradientOptions

                                public typealias RawValue = UInt32
    }

    public func resolve(_ shading: GraphicsContext.Shading) -> GraphicsContext.Shading

    public func drawLayer(content: (inout GraphicsContext) throws -> Void) rethrows

    public func fill(_ path: Path, with shading: GraphicsContext.Shading, style: FillStyle = FillStyle())

    public func stroke(_ path: Path, with shading: GraphicsContext.Shading, style: StrokeStyle)

    public func stroke(_ path: Path, with shading: GraphicsContext.Shading, lineWidth: CGFloat = 1)

    public struct ResolvedImage {

            public var size: CGSize { get }

                        public let baseline: CGFloat

                            public var shading: GraphicsContext.Shading?
    }

    public func resolve(_ image: Image) -> GraphicsContext.ResolvedImage

    public func draw(_ image: GraphicsContext.ResolvedImage, in rect: CGRect, style: FillStyle = FillStyle())

    public func draw(_ image: GraphicsContext.ResolvedImage, at point: CGPoint, anchor: UnitPoint = .center)

    public func draw(_ image: Image, in rect: CGRect, style: FillStyle = FillStyle())

    public func draw(_ image: Image, at point: CGPoint, anchor: UnitPoint = .center)

    public struct ResolvedText {

                        public var shading: GraphicsContext.Shading

                        public func measure(in size: CGSize) -> CGSize

            public func firstBaseline(in size: CGSize) -> CGFloat

                public func lastBaseline(in size: CGSize) -> CGFloat
    }

    public func resolve(_ text: Text) -> GraphicsContext.ResolvedText

    public func draw(_ text: GraphicsContext.ResolvedText, in rect: CGRect)

    public func draw(_ text: GraphicsContext.ResolvedText, at point: CGPoint, anchor: UnitPoint = .center)

    public func draw(_ text: Text, in rect: CGRect)

    public func draw(_ text: Text, at point: CGPoint, anchor: UnitPoint = .center)

    public struct ResolvedSymbol {

            public var size: CGSize { get }
    }

    public func resolveSymbol<ID>(id: ID) -> GraphicsContext.ResolvedSymbol? where ID : Hashable

    public func draw(_ symbol: GraphicsContext.ResolvedSymbol, in rect: CGRect)

    public func draw(_ symbol: GraphicsContext.ResolvedSymbol, at point: CGPoint, anchor: UnitPoint = .center)

    public func withCGContext(content: (CGContext) throws -> Void) rethrows
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension GraphicsContext.BlendMode : Sendable {
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension GraphicsContext.ClipOptions : Sendable {
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension GraphicsContext.ShadowOptions : Sendable {
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension GraphicsContext.BlurOptions : Sendable {
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension GraphicsContext.FilterOptions : Sendable {
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension GraphicsContext.GradientOptions : Sendable {
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
@frozen public struct Grid<Content> where Content : View {

    @inlinable public init(alignment: Alignment = .center, horizontalSpacing: CGFloat? = nil, verticalSpacing: CGFloat? = nil, @ViewBuilder content: () -> Content)

    public typealias Body = Never
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension Grid : Animatable where Content == EmptyView {

    public typealias AnimatableData = EmptyAnimatableData
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension Grid : Layout where Content == EmptyView {

    public typealias Cache = _GridLayout.Cache

    public init(alignment: Alignment = .center, horizontalSpacing: CGFloat? = nil, verticalSpacing: CGFloat? = nil, spacing: CGFloat? = nil)
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension Grid : View {
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public struct GridItem {

    public enum Size {

            case fixed(CGFloat)

                            case flexible(minimum: CGFloat = 10, maximum: CGFloat = .infinity)

                                    case adaptive(minimum: CGFloat, maximum: CGFloat = .infinity)
    }

    public var size: GridItem.Size

    public var spacing: CGFloat?

    public var alignment: Alignment?

    public init(_ size: GridItem.Size = .flexible(), spacing: CGFloat? = nil, alignment: Alignment? = nil)
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
@frozen public struct GridRow<Content> where Content : View {

    @inlinable public init(alignment: VerticalAlignment? = nil, @ViewBuilder content: () -> Content)

    public typealias Body = Never
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension GridRow : View {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct Group<Content> {

    public typealias Body = Never
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension Group : TableColumnContent where Content : TableColumnContent {

    public typealias TableRowValue = Content.TableRowValue

    public typealias TableColumnSortComparator = Content.TableColumnSortComparator

    public typealias TableColumnBody = Never

    @inlinable public init<R, C>(@TableColumnBuilder<R, C> content: () -> Content) where R == Content.TableRowValue, C == Content.TableColumnSortComparator
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension Group : AccessibilityRotorContent where Content : AccessibilityRotorContent {

    public var body: Never { get }

    public init(@AccessibilityRotorContentBuilder content: () -> Content)
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension Group : Scene where Content : Scene {

    @inlinable public init(@SceneBuilder content: () -> Content)
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Group : View where Content : View {

    @inlinable public init(@ViewBuilder content: () -> Content)
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension Group : TableRowContent where Content : TableRowContent {

    public typealias TableRowValue = Content.TableRowValue

    public typealias TableRowBody = Never

    @inlinable public init<R>(@TableRowBuilder<R> content: () -> Content) where R == Content.TableRowValue
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension Group : ToolbarContent where Content : ToolbarContent {

    public init(@ToolbarContentBuilder content: () -> Content)
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension Group : CustomizableToolbarContent where Content : CustomizableToolbarContent {

    public init(@ToolbarContentBuilder content: () -> Content)
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension Group : Commands where Content : Commands {

    @inlinable public init(@CommandsBuilder content: () -> Content)
}

@available(iOS 14.0, macOS 10.15, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct GroupBox<Label, Content> : View where Label : View, Content : View {

    @available(iOS 14.0, macOS 10.15, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public init(@ViewBuilder content: () -> Content, @ViewBuilder label: () -> Label)

    @MainActor public var body: some View { get }

    public typealias Body = some View
}

@available(iOS 14.0, macOS 10.15, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension GroupBox where Label == GroupBoxStyleConfiguration.Label, Content == GroupBoxStyleConfiguration.Content {

    public init(_ configuration: GroupBoxStyleConfiguration)
}

@available(iOS 14.0, macOS 10.15, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension GroupBox where Label == EmptyView {

    public init(@ViewBuilder content: () -> Content)
}

@available(iOS 15.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension GroupBox where Label == Text {

    public init(_ titleKey: LocalizedStringKey, @ViewBuilder content: () -> Content)

    public init<S>(_ title: S, @ViewBuilder content: () -> Content) where S : StringProtocol
}

@available(iOS 14.0, macOS 10.15, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension GroupBox {

    @available(iOS, deprecated: 100000.0, renamed: "GroupBox(content:label:)")
    @available(macOS, deprecated: 100000.0, renamed: "GroupBox(content:label:)")
    public init(label: Label, @ViewBuilder content: () -> Content)
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public protocol GroupBoxStyle {

    associatedtype Body : View

    @ViewBuilder func makeBody(configuration: Self.Configuration) -> Self.Body

    typealias Configuration = GroupBoxStyleConfiguration
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension GroupBoxStyle where Self == DefaultGroupBoxStyle {

    public static var automatic: DefaultGroupBoxStyle { get }
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct GroupBoxStyleConfiguration {

    public struct Label : View {

                        public typealias Body = Never
    }

    public struct Content : View {

                        public typealias Body = Never
    }

    public let label: GroupBoxStyleConfiguration.Label

    public let content: GroupBoxStyleConfiguration.Content
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public struct GroupedFormStyle : FormStyle {

    public init()

    public func makeBody(configuration: GroupedFormStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct HSplitView<Content> : View where Content : View {

    public init(@ViewBuilder content: () -> Content)

    public typealias Body = Never
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct HStack<Content> : View where Content : View {

    @inlinable public init(alignment: VerticalAlignment = .center, spacing: CGFloat? = nil, @ViewBuilder content: () -> Content)

    public typealias Body = Never
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension HStack : Animatable where Content == EmptyView {

    public typealias AnimatableData = EmptyAnimatableData
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension HStack : Layout where Content == EmptyView {

    public typealias Cache

    public init(alignment: VerticalAlignment = .center, spacing: CGFloat? = nil)
}

@available(macOS 11.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct HiddenTitleBarWindowStyle : WindowStyle {

    public init()
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
@frozen public struct HierarchicalShapeStyle : ShapeStyle {

    public static let primary: HierarchicalShapeStyle

    public static let secondary: HierarchicalShapeStyle

    public static let tertiary: HierarchicalShapeStyle

    public static let quaternary: HierarchicalShapeStyle
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension HierarchicalShapeStyle : Sendable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct HorizontalAlignment : Equatable {

    public init(_ id: AlignmentID.Type)

    public static func == (a: HorizontalAlignment, b: HorizontalAlignment) -> Bool
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension HorizontalAlignment {

    public func combineExplicit<S>(_ values: S) -> CGFloat? where S : Sequence, S.Element == CGFloat?
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension HorizontalAlignment {

    public static let leading: HorizontalAlignment

    public static let center: HorizontalAlignment

    public static let trailing: HorizontalAlignment
}

@available(iOS 16.0, macOS 13.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension HorizontalAlignment {

    public static let listRowSeparatorLeading: HorizontalAlignment

    public static let listRowSeparatorTrailing: HorizontalAlignment
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension HorizontalAlignment : Sendable {
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
@frozen public enum HorizontalEdge : Int8, CaseIterable, Codable {

    case leading

    case trailing

    @frozen public struct Set : OptionSet {

                        public typealias Element = HorizontalEdge.Set

                                                                    public let rawValue: Int8

                                                                        public init(rawValue: Int8)

            public static let leading: HorizontalEdge.Set

            public static let trailing: HorizontalEdge.Set

            public static let all: HorizontalEdge.Set

            public init(_ edge: HorizontalEdge)

            public typealias ArrayLiteralElement = HorizontalEdge.Set.Element

                                public typealias RawValue = Int8
    }

    public init?(rawValue: Int8)

    public typealias AllCases = [HorizontalEdge]

    public typealias RawValue = Int8

    public static var allCases: [HorizontalEdge] { get }

    public var rawValue: Int8 { get }
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension HorizontalEdge : Equatable {
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension HorizontalEdge : Hashable {
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension HorizontalEdge : RawRepresentable {
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension HorizontalEdge : Sendable {
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension HorizontalEdge.Set : Sendable {
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, *)
@available(watchOS, unavailable)
@frozen public enum HoverPhase : Equatable {

    case active(CGPoint)

    case ended

    public static func == (a: HoverPhase, b: HoverPhase) -> Bool
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, *)
@available(watchOS, unavailable)
extension HoverPhase : Sendable {
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public struct IconOnlyLabelStyle : LabelStyle {

    public init()

    public func makeBody(configuration: IconOnlyLabelStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct Image : Equatable {

    public static func == (lhs: Image, rhs: Image) -> Bool
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Image {

    public init(_ name: String, bundle: Bundle? = nil)

    public init(_ name: String, bundle: Bundle? = nil, label: Text)

    public init(decorative name: String, bundle: Bundle? = nil)

    @available(macOS 11.0, *)
    public init(systemName: String)
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension Image {

    public init(systemName: String, variableValue: Double?)

    public init(_ name: String, variableValue: Double?, bundle: Bundle? = nil)

    public init(_ name: String, variableValue: Double?, bundle: Bundle? = nil, label: Text)

    public init(decorative name: String, variableValue: Double?, bundle: Bundle? = nil)
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Image {

    public func renderingMode(_ renderingMode: Image.TemplateRenderingMode?) -> Image
}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension Image {

    @available(iOS, unavailable)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public init(nsImage: NSImage)
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Image : View {

    public typealias Body = Never
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Image {

    public enum TemplateRenderingMode {

                case template

                        case original

                                        public static func == (a: Image.TemplateRenderingMode, b: Image.TemplateRenderingMode) -> Bool

                                                            public func hash(into hasher: inout Hasher)

                                    public var hashValue: Int { get }
    }

    @available(macOS 11.0, *)
    public enum Scale {

            case small

            case medium

            case large

                                        public static func == (a: Image.Scale, b: Image.Scale) -> Bool

                                                            public func hash(into hasher: inout Hasher)

                                    public var hashValue: Int { get }
    }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Image {

    public enum Interpolation {

            case none

                case low

                case medium

                case high

                                        public static func == (a: Image.Interpolation, b: Image.Interpolation) -> Bool

                                                            public func hash(into hasher: inout Hasher)

                                    public var hashValue: Int { get }
    }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Image {

    public func interpolation(_ interpolation: Image.Interpolation) -> Image

    public func antialiased(_ isAntialiased: Bool) -> Image
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension Image {

    public func symbolRenderingMode(_ mode: SymbolRenderingMode?) -> Image
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Image {

    public enum ResizingMode {

                case tile

                case stretch

                                        public static func == (a: Image.ResizingMode, b: Image.ResizingMode) -> Bool

                                                            public func hash(into hasher: inout Hasher)

                                    public var hashValue: Int { get }
    }

    public func resizable(capInsets: EdgeInsets = EdgeInsets(), resizingMode: Image.ResizingMode = .stretch) -> Image
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Image {

    public init(_ cgImage: CGImage, scale: CGFloat, orientation: Image.Orientation = .up, label: Text)

    public init(decorative cgImage: CGImage, scale: CGFloat, orientation: Image.Orientation = .up)
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Image {

    @frozen public enum Orientation : UInt8, CaseIterable, Hashable {

                case up

                case upMirrored

                case down

                case downMirrored

                case left

                    case leftMirrored

                case right

                case rightMirrored

                                                                        public init?(rawValue: UInt8)

            public typealias AllCases = [Image.Orientation]

                                public typealias RawValue = UInt8

            public static var allCases: [Image.Orientation] { get }

                                                                    public var rawValue: UInt8 { get }
    }
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension Image {

    public init(size: CGSize, label: Text? = nil, opaque: Bool = false, colorMode: ColorRenderingMode = .nonLinear, renderer: @escaping (inout GraphicsContext) -> Void)
}

extension Image : Transferable {

    public static var transferRepresentation: some TransferRepresentation { get }

    public typealias Representation = some TransferRepresentation
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Image.TemplateRenderingMode : Equatable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Image.TemplateRenderingMode : Hashable {
}

@available(iOS 13.0, tvOS 13.0, watchOS 6.0, macOS 11.0, *)
extension Image.Scale : Equatable {
}

@available(iOS 13.0, tvOS 13.0, watchOS 6.0, macOS 11.0, *)
extension Image.Scale : Hashable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Image.Interpolation : Equatable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Image.Interpolation : Hashable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Image.ResizingMode : Equatable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Image.ResizingMode : Hashable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Image.Orientation : RawRepresentable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Image.Orientation : Sendable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct ImagePaint : ShapeStyle {

    public var image: Image

    public var sourceRect: CGRect

    public var scale: CGFloat

    public init(image: Image, sourceRect: CGRect = CGRect(x: 0, y: 0, width: 1, height: 1), scale: CGFloat = 1)
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
final public class ImageRenderer<Content> : ObservableObject where Content : View {

    final public let objectWillChange: PassthroughSubject<Void, Never>

    @MainActor final public var content: Content

    @MainActor final public var proposedSize: ProposedViewSize

    @MainActor final public var scale: CGFloat

    @MainActor final public var isOpaque: Bool

    @MainActor final public var colorMode: ColorRenderingMode

    @MainActor public init(content view: Content)

    @MainActor final public var cgImage: CGImage? { get }

    @MainActor final public var nsImage: NSImage? { get }

    @MainActor final public func render(rasterizationScale: CGFloat = 1, renderer: (CGSize, (CGContext) -> Void) -> Void)

    public typealias ObjectWillChangePublisher = PassthroughSubject<Void, Never>
}

@available(macOS 12.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct ImportFromDevicesCommands : Commands {

    public init()

    public var body: some Commands { get }

    public typealias Body = some Commands
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public struct IndexedIdentifierCollection<Base, ID> : Collection where Base : Collection, ID : Hashable {

    public struct Element {
    }

    public typealias Index = Base.Index

    public var startIndex: IndexedIdentifierCollection<Base, ID>.Index { get }

    public var endIndex: IndexedIdentifierCollection<Base, ID>.Index { get }

    public subscript(position: IndexedIdentifierCollection<Base, ID>.Index) -> IndexedIdentifierCollection<Base, ID>.Element { get }

    public func index(after i: IndexedIdentifierCollection<Base, ID>.Index) -> IndexedIdentifierCollection<Base, ID>.Index

    public typealias Indices = DefaultIndices<IndexedIdentifierCollection<Base, ID>>

    public typealias Iterator = IndexingIterator<IndexedIdentifierCollection<Base, ID>>

    public typealias SubSequence = Slice<IndexedIdentifierCollection<Base, ID>>
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension IndexedIdentifierCollection : BidirectionalCollection where Base : BidirectionalCollection {

    public func index(before i: IndexedIdentifierCollection<Base, ID>.Index) -> IndexedIdentifierCollection<Base, ID>.Index
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension IndexedIdentifierCollection : RandomAccessCollection where Base : RandomAccessCollection {
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public struct InlinePickerStyle : PickerStyle {

    public init()
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct InsetListStyle : ListStyle {

    public init()

    @available(macOS 12.0, *)
    @available(iOS, unavailable)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public init(alternatesRowBackgrounds: Bool)
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct InsetTableStyle : TableStyle {

    public init()

    @available(iOS, unavailable)
    public init(alternatesRowBackgrounds: Bool)

    public func makeBody(configuration: InsetTableStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public protocol InsettableShape : Shape {

    associatedtype InsetShape : InsettableShape

    func inset(by amount: CGFloat) -> Self.InsetShape
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension InsettableShape {

    @inlinable public func strokeBorder<S>(_ content: S, style: StrokeStyle, antialiased: Bool = true) -> some View where S : ShapeStyle


    @inlinable public func strokeBorder(style: StrokeStyle, antialiased: Bool = true) -> some View


    @inlinable public func strokeBorder<S>(_ content: S, lineWidth: CGFloat = 1, antialiased: Bool = true) -> some View where S : ShapeStyle


    @inlinable public func strokeBorder(lineWidth: CGFloat = 1, antialiased: Bool = true) -> some View

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
public struct InterfaceOrientation : CaseIterable, Identifiable, Equatable {

    public static var allCases: [InterfaceOrientation] { get }

    public var id: String { get }

    public static let portrait: InterfaceOrientation

    public static let portraitUpsideDown: InterfaceOrientation

    public static let landscapeLeft: InterfaceOrientation

    public static let landscapeRight: InterfaceOrientation

    public static func == (a: InterfaceOrientation, b: InterfaceOrientation) -> Bool

    public typealias AllCases = [InterfaceOrientation]

    public typealias ID = String
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct ItemProviderTableRowModifier {

    public var body: some _TableRowContentModifier { get }

    public typealias Body = some _TableRowContentModifier
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct KeyEquivalent {

    public static let upArrow: KeyEquivalent

    public static let downArrow: KeyEquivalent

    public static let leftArrow: KeyEquivalent

    public static let rightArrow: KeyEquivalent

    public static let escape: KeyEquivalent

    public static let delete: KeyEquivalent

    public static let deleteForward: KeyEquivalent

    public static let home: KeyEquivalent

    public static let end: KeyEquivalent

    public static let pageUp: KeyEquivalent

    public static let pageDown: KeyEquivalent

    public static let clear: KeyEquivalent

    public static let tab: KeyEquivalent

    public static let space: KeyEquivalent

    public static let `return`: KeyEquivalent

    public var character: Character

    public init(_ character: Character)
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension KeyEquivalent : ExpressibleByExtendedGraphemeClusterLiteral {

    public init(extendedGraphemeClusterLiteral: Character)

    public typealias ExtendedGraphemeClusterLiteralType = Character

    public typealias UnicodeScalarLiteralType = Character
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct KeyboardShortcut {

    @available(iOS 15.0, macOS 12.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public struct Localization {

                        public static let automatic: KeyboardShortcut.Localization

                                    public static let withoutMirroring: KeyboardShortcut.Localization

                    public static let custom: KeyboardShortcut.Localization
    }

    public static let defaultAction: KeyboardShortcut

    public static let cancelAction: KeyboardShortcut

    public var key: KeyEquivalent

    public var modifiers: EventModifiers

    public var localization: KeyboardShortcut.Localization

    public init(_ key: KeyEquivalent, modifiers: EventModifiers = .command)

    @available(iOS 15.0, macOS 12.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public init(_ key: KeyEquivalent, modifiers: EventModifiers = .command, localization: KeyboardShortcut.Localization)
}

@available(iOS 15.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension KeyboardShortcut : Hashable {

    public static func == (lhs: KeyboardShortcut, rhs: KeyboardShortcut) -> Bool

    public func hash(into hasher: inout Hasher)

    public var hashValue: Int { get }
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public struct Label<Title, Icon> : View where Title : View, Icon : View {

    public init(@ViewBuilder title: () -> Title, @ViewBuilder icon: () -> Icon)

    @MainActor public var body: some View { get }

    public typealias Body = some View
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension Label where Title == Text, Icon == Image {

    public init(_ titleKey: LocalizedStringKey, image name: String)

    public init(_ titleKey: LocalizedStringKey, systemImage name: String)

    public init<S>(_ title: S, image name: String) where S : StringProtocol

    public init<S>(_ title: S, systemImage name: String) where S : StringProtocol
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension Label where Title == LabelStyleConfiguration.Title, Icon == LabelStyleConfiguration.Icon {

    public init(_ configuration: LabelStyleConfiguration)
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public protocol LabelStyle {

    associatedtype Body : View

    @ViewBuilder func makeBody(configuration: Self.Configuration) -> Self.Body

    typealias Configuration = LabelStyleConfiguration
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension LabelStyle where Self == DefaultLabelStyle {

    public static var automatic: DefaultLabelStyle { get }
}

@available(iOS 14.5, macOS 11.3, tvOS 14.5, watchOS 7.4, *)
extension LabelStyle where Self == TitleAndIconLabelStyle {

    public static var titleAndIcon: TitleAndIconLabelStyle { get }
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension LabelStyle where Self == IconOnlyLabelStyle {

    public static var iconOnly: IconOnlyLabelStyle { get }
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension LabelStyle where Self == TitleOnlyLabelStyle {

    public static var titleOnly: TitleOnlyLabelStyle { get }
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public struct LabelStyleConfiguration {

    public struct Title {

                        public typealias Body = Never
    }

    public struct Icon {

                        public typealias Body = Never
    }

    public var title: LabelStyleConfiguration.Title { get }

    public var icon: LabelStyleConfiguration.Icon { get }
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension LabelStyleConfiguration.Title : View {
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension LabelStyleConfiguration.Icon : View {
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public struct LabeledContent<Label, Content> {
}

extension LabeledContent : View where Label : View, Content : View {

    public init(@ViewBuilder content: () -> Content, @ViewBuilder label: () -> Label)

    @MainActor public var body: some View { get }

    public typealias Body = some View
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension LabeledContent where Label == Text, Content : View {

    public init(_ titleKey: LocalizedStringKey, @ViewBuilder content: () -> Content)

    public init<S>(_ title: S, @ViewBuilder content: () -> Content) where S : StringProtocol
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension LabeledContent where Label == Text, Content == Text {

    public init<S>(_ titleKey: LocalizedStringKey, value: S) where S : StringProtocol

    public init<S1, S2>(_ title: S1, value: S2) where S1 : StringProtocol, S2 : StringProtocol

    public init<F>(_ titleKey: LocalizedStringKey, value: F.FormatInput, format: F) where F : FormatStyle, F.FormatInput : Equatable, F.FormatOutput == String

    public init<S, F>(_ title: S, value: F.FormatInput, format: F) where S : StringProtocol, F : FormatStyle, F.FormatInput : Equatable, F.FormatOutput == String
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension LabeledContent where Label == LabeledContentStyleConfiguration.Label, Content == LabeledContentStyleConfiguration.Content {

    public init(_ configuration: LabeledContentStyleConfiguration)
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public protocol LabeledContentStyle {

    associatedtype Body : View

    @ViewBuilder func body(configuration: Self.Configuration) -> Self.Body

    typealias Configuration = LabeledContentStyleConfiguration
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension LabeledContentStyle where Self == AutomaticLabeledContentStyle {

    public static var automatic: AutomaticLabeledContentStyle { get }
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public struct LabeledContentStyleConfiguration {

    public struct Label : View {

                        public typealias Body = Never
    }

    public struct Content : View {

                        public typealias Body = Never
    }

    public let label: LabeledContentStyleConfiguration.Label

    public let content: LabeledContentStyleConfiguration.Content
}

@available(iOS 16.0, macOS 13.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct LabeledControlGroupContent<Content, Label> : View where Content : View, Label : View {

    @MainActor public var body: some View { get }

    public typealias Body = some View
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public struct LabeledToolbarItemGroupContent<Content, Label> : View where Content : View, Label : View {

    @MainActor public var body: some View { get }

    public typealias Body = some View
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public protocol Layout : Animatable {

    static var layoutProperties: LayoutProperties { get }

    associatedtype Cache = Void

    typealias Subviews = LayoutSubviews

    func makeCache(subviews: Self.Subviews) -> Self.Cache

    func updateCache(_ cache: inout Self.Cache, subviews: Self.Subviews)

    func spacing(subviews: Self.Subviews, cache: inout Self.Cache) -> ViewSpacing

    func sizeThatFits(proposal: ProposedViewSize, subviews: Self.Subviews, cache: inout Self.Cache) -> CGSize

    func placeSubviews(in bounds: CGRect, proposal: ProposedViewSize, subviews: Self.Subviews, cache: inout Self.Cache)

    func explicitAlignment(of guide: HorizontalAlignment, in bounds: CGRect, proposal: ProposedViewSize, subviews: Self.Subviews, cache: inout Self.Cache) -> CGFloat?

    func explicitAlignment(of guide: VerticalAlignment, in bounds: CGRect, proposal: ProposedViewSize, subviews: Self.Subviews, cache: inout Self.Cache) -> CGFloat?
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension Layout {

    public static var layoutProperties: LayoutProperties { get }

    public func updateCache(_ cache: inout Self.Cache, subviews: Self.Subviews)

    public func explicitAlignment(of guide: HorizontalAlignment, in bounds: CGRect, proposal: ProposedViewSize, subviews: Self.Subviews, cache: inout Self.Cache) -> CGFloat?

    public func explicitAlignment(of guide: VerticalAlignment, in bounds: CGRect, proposal: ProposedViewSize, subviews: Self.Subviews, cache: inout Self.Cache) -> CGFloat?

    public func spacing(subviews: Self.Subviews, cache: inout Self.Cache) -> ViewSpacing
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension Layout where Self.Cache == () {

    public func makeCache(subviews: Self.Subviews) -> Self.Cache
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension Layout {

    public func callAsFunction<V>(@ViewBuilder _ content: () -> V) -> some View where V : View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public enum LayoutDirection : Hashable, CaseIterable {

    case leftToRight

    case rightToLeft

    public static func == (a: LayoutDirection, b: LayoutDirection) -> Bool

    public func hash(into hasher: inout Hasher)

    public typealias AllCases = [LayoutDirection]

    public static var allCases: [LayoutDirection] { get }

    public var hashValue: Int { get }
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public struct LayoutProperties {

    public init()

    public var stackOrientation: Axis?
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public struct LayoutSubview : Equatable {

    public subscript<K>(key: K.Type) -> K.Value where K : LayoutValueKey { get }

    public var priority: Double { get }

    public func sizeThatFits(_ proposal: ProposedViewSize) -> CGSize

    public func dimensions(in proposal: ProposedViewSize) -> ViewDimensions

    public var spacing: ViewSpacing { get }

    public func place(at position: CGPoint, anchor: UnitPoint = .topLeading, proposal: ProposedViewSize)

    public static func == (a: LayoutSubview, b: LayoutSubview) -> Bool
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public struct LayoutSubviews : Equatable, RandomAccessCollection {

    public typealias SubSequence = LayoutSubviews

    public typealias Element = LayoutSubview

    public typealias Index = Int

    public var layoutDirection: LayoutDirection

    public var startIndex: Int { get }

    public var endIndex: Int { get }

    public subscript(index: Int) -> LayoutSubviews.Element { get }

    public subscript(bounds: Range<Int>) -> LayoutSubviews { get }

    public subscript<S>(indices: S) -> LayoutSubviews where S : Sequence, S.Element == Int { get }

    public static func == (lhs: LayoutSubviews, rhs: LayoutSubviews) -> Bool

    public typealias Indices = Range<LayoutSubviews.Index>

    public typealias Iterator = IndexingIterator<LayoutSubviews>
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public protocol LayoutValueKey {

    associatedtype Value

    static var defaultValue: Self.Value { get }
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public struct LazyHGrid<Content> : View where Content : View {

    public init(rows: [GridItem], alignment: VerticalAlignment = .center, spacing: CGFloat? = nil, pinnedViews: PinnedScrollableViews = .init(), @ViewBuilder content: () -> Content)

    public typealias Body = Never
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public struct LazyHStack<Content> : View where Content : View {

    public init(alignment: VerticalAlignment = .center, spacing: CGFloat? = nil, pinnedViews: PinnedScrollableViews = .init(), @ViewBuilder content: () -> Content)

    public typealias Body = Never
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public struct LazyVGrid<Content> : View where Content : View {

    public init(columns: [GridItem], alignment: HorizontalAlignment = .center, spacing: CGFloat? = nil, pinnedViews: PinnedScrollableViews = .init(), @ViewBuilder content: () -> Content)

    public typealias Body = Never
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public struct LazyVStack<Content> : View where Content : View {

    public init(alignment: HorizontalAlignment = .center, spacing: CGFloat? = nil, pinnedViews: PinnedScrollableViews = .init(), @ViewBuilder content: () -> Content)

    public typealias Body = Never
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public enum LegibilityWeight : Hashable {

    case regular

    case bold

    public static func == (a: LegibilityWeight, b: LegibilityWeight) -> Bool

    public func hash(into hasher: inout Hasher)

    public var hashValue: Int { get }
}

@available(iOS 16.0, macOS 13.0, watchOS 9.0, *)
@available(tvOS, unavailable)
public struct LinearCapacityGaugeStyle : GaugeStyle {

    public init()

    public func makeBody(configuration: LinearCapacityGaugeStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct LinearGradient : ShapeStyle, View {

    public init(gradient: Gradient, startPoint: UnitPoint, endPoint: UnitPoint)

    public init(colors: [Color], startPoint: UnitPoint, endPoint: UnitPoint)

    public init(stops: [Gradient.Stop], startPoint: UnitPoint, endPoint: UnitPoint)

    public typealias Body
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public struct LinearProgressViewStyle : ProgressViewStyle {

    public init()

    @available(iOS, introduced: 14.0, deprecated: 100000.0, message: "Use ``View/tint(_)`` instead.")
    @available(macOS, introduced: 11.0, deprecated: 100000.0, message: "Use ``View/tint(_)`` instead.")
    @available(tvOS, introduced: 14.0, deprecated: 100000.0, message: "Use ``View/tint(_)`` instead.")
    @available(watchOS, introduced: 7.0, deprecated: 100000.0, message: "Use ``View/tint(_)`` instead.")
    public init(tint: Color)

    public func makeBody(configuration: LinearProgressViewStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public struct Link<Label> : View where Label : View {

    public init(destination: URL, @ViewBuilder label: () -> Label)

    @MainActor public var body: some View { get }

    public typealias Body = some View
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension Link where Label == Text {

    public init(_ titleKey: LocalizedStringKey, destination: URL)

    public init<S>(_ title: S, destination: URL) where S : StringProtocol
}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct LinkButtonStyle : PrimitiveButtonStyle {

    public init()

    public func makeBody(configuration: LinkButtonStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@MainActor public struct List<SelectionValue, Content> : View where SelectionValue : Hashable, Content : View {

    @available(watchOS, unavailable)
    @MainActor public init(selection: Binding<Set<SelectionValue>>?, @ViewBuilder content: () -> Content)

    @available(watchOS, unavailable)
    @MainActor public init(selection: Binding<SelectionValue?>?, @ViewBuilder content: () -> Content)

    @available(iOS 16.0, macOS 12.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    @MainActor public init(selection: Binding<SelectionValue>, @ViewBuilder content: () -> Content)

    @MainActor public var body: some View { get }

    public typealias Body = some View
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension List {

    @available(watchOS, unavailable)
    @MainActor public init<Data, RowContent>(_ data: Data, selection: Binding<Set<SelectionValue>>?, @ViewBuilder rowContent: @escaping (Data.Element) -> RowContent) where Content == ForEach<Data, Data.Element.ID, RowContent>, Data : RandomAccessCollection, RowContent : View, Data.Element : Identifiable

    @available(iOS 16.0, macOS 13.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    @MainActor public init<Data, RowContent>(_ data: Data, selection: Binding<SelectionValue>, @ViewBuilder rowContent: @escaping (Data.Element) -> RowContent) where Content == ForEach<Data, Data.Element.ID, RowContent>, Data : RandomAccessCollection, RowContent : View, Data.Element : Identifiable

    @available(iOS 14.0, macOS 11.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    @MainActor public init<Data, RowContent>(_ data: Data, children: KeyPath<Data.Element, Data?>, selection: Binding<Set<SelectionValue>>?, @ViewBuilder rowContent: @escaping (Data.Element) -> RowContent) where Content == OutlineGroup<Data, Data.Element.ID, RowContent, RowContent, DisclosureGroup<RowContent, OutlineSubgroupChildren>>, Data : RandomAccessCollection, RowContent : View, Data.Element : Identifiable

    @available(iOS 16.0, macOS 13.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    @MainActor public init<Data, RowContent>(_ data: Data, children: KeyPath<Data.Element, Data?>, selection: Binding<SelectionValue>, @ViewBuilder rowContent: @escaping (Data.Element) -> RowContent) where Content == OutlineGroup<Data, Data.Element.ID, RowContent, RowContent, DisclosureGroup<RowContent, OutlineSubgroupChildren>>, Data : RandomAccessCollection, RowContent : View, Data.Element : Identifiable

    @available(watchOS, unavailable)
    @MainActor public init<Data, ID, RowContent>(_ data: Data, id: KeyPath<Data.Element, ID>, selection: Binding<Set<SelectionValue>>?, @ViewBuilder rowContent: @escaping (Data.Element) -> RowContent) where Content == ForEach<Data, ID, RowContent>, Data : RandomAccessCollection, ID : Hashable, RowContent : View

    @available(iOS 16.0, macOS 13.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    @MainActor public init<Data, ID, RowContent>(_ data: Data, id: KeyPath<Data.Element, ID>, selection: Binding<SelectionValue>, @ViewBuilder rowContent: @escaping (Data.Element) -> RowContent) where Content == ForEach<Data, ID, RowContent>, Data : RandomAccessCollection, ID : Hashable, RowContent : View

    @available(iOS 14.0, macOS 11.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    @MainActor public init<Data, ID, RowContent>(_ data: Data, id: KeyPath<Data.Element, ID>, children: KeyPath<Data.Element, Data?>, selection: Binding<Set<SelectionValue>>?, @ViewBuilder rowContent: @escaping (Data.Element) -> RowContent) where Content == OutlineGroup<Data, ID, RowContent, RowContent, DisclosureGroup<RowContent, OutlineSubgroupChildren>>, Data : RandomAccessCollection, ID : Hashable, RowContent : View

    @available(iOS 16.0, macOS 13.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    @MainActor public init<Data, ID, RowContent>(_ data: Data, id: KeyPath<Data.Element, ID>, children: KeyPath<Data.Element, Data?>, selection: Binding<SelectionValue>, @ViewBuilder rowContent: @escaping (Data.Element) -> RowContent) where Content == OutlineGroup<Data, ID, RowContent, RowContent, DisclosureGroup<RowContent, OutlineSubgroupChildren>>, Data : RandomAccessCollection, ID : Hashable, RowContent : View

    @available(watchOS, unavailable)
    @MainActor public init<RowContent>(_ data: Range<Int>, selection: Binding<Set<SelectionValue>>?, @ViewBuilder rowContent: @escaping (Int) -> RowContent) where Content == ForEach<Range<Int>, Int, HStack<RowContent>>, RowContent : View

    @available(iOS 16.0, macOS 13.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    @MainActor public init<RowContent>(_ data: Range<Int>, selection: Binding<SelectionValue>, @ViewBuilder rowContent: @escaping (Int) -> RowContent) where Content == ForEach<Range<Int>, Int, HStack<RowContent>>, RowContent : View

    @available(watchOS, unavailable)
    @MainActor public init<Data, RowContent>(_ data: Data, selection: Binding<SelectionValue?>?, @ViewBuilder rowContent: @escaping (Data.Element) -> RowContent) where Content == ForEach<Data, Data.Element.ID, RowContent>, Data : RandomAccessCollection, RowContent : View, Data.Element : Identifiable

    @available(iOS 14.0, macOS 11.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    @MainActor public init<Data, RowContent>(_ data: Data, children: KeyPath<Data.Element, Data?>, selection: Binding<SelectionValue?>?, @ViewBuilder rowContent: @escaping (Data.Element) -> RowContent) where Content == OutlineGroup<Data, Data.Element.ID, RowContent, RowContent, DisclosureGroup<RowContent, OutlineSubgroupChildren>>, Data : RandomAccessCollection, RowContent : View, Data.Element : Identifiable

    @available(watchOS, unavailable)
    @MainActor public init<Data, ID, RowContent>(_ data: Data, id: KeyPath<Data.Element, ID>, selection: Binding<SelectionValue?>?, @ViewBuilder rowContent: @escaping (Data.Element) -> RowContent) where Content == ForEach<Data, ID, RowContent>, Data : RandomAccessCollection, ID : Hashable, RowContent : View

    @available(iOS 14.0, macOS 11.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    @MainActor public init<Data, ID, RowContent>(_ data: Data, id: KeyPath<Data.Element, ID>, children: KeyPath<Data.Element, Data?>, selection: Binding<SelectionValue?>?, @ViewBuilder rowContent: @escaping (Data.Element) -> RowContent) where Content == OutlineGroup<Data, ID, RowContent, RowContent, DisclosureGroup<RowContent, OutlineSubgroupChildren>>, Data : RandomAccessCollection, ID : Hashable, RowContent : View

    @available(watchOS, unavailable)
    @MainActor public init<RowContent>(_ data: Range<Int>, selection: Binding<SelectionValue?>?, @ViewBuilder rowContent: @escaping (Int) -> RowContent) where Content == ForEach<Range<Int>, Int, RowContent>, RowContent : View
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension List where SelectionValue == Never {

    @MainActor public init(@ViewBuilder content: () -> Content)

    @MainActor public init<Data, RowContent>(_ data: Data, @ViewBuilder rowContent: @escaping (Data.Element) -> RowContent) where Content == ForEach<Data, Data.Element.ID, RowContent>, Data : RandomAccessCollection, RowContent : View, Data.Element : Identifiable

    @available(iOS 14.0, macOS 11.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    @MainActor public init<Data, RowContent>(_ data: Data, children: KeyPath<Data.Element, Data?>, @ViewBuilder rowContent: @escaping (Data.Element) -> RowContent) where Content == OutlineGroup<Data, Data.Element.ID, RowContent, RowContent, DisclosureGroup<RowContent, OutlineSubgroupChildren>>, Data : RandomAccessCollection, RowContent : View, Data.Element : Identifiable

    @MainActor public init<Data, ID, RowContent>(_ data: Data, id: KeyPath<Data.Element, ID>, @ViewBuilder rowContent: @escaping (Data.Element) -> RowContent) where Content == ForEach<Data, ID, RowContent>, Data : RandomAccessCollection, ID : Hashable, RowContent : View

    @available(iOS 14.0, macOS 11.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    @MainActor public init<Data, ID, RowContent>(_ data: Data, id: KeyPath<Data.Element, ID>, children: KeyPath<Data.Element, Data?>, @ViewBuilder rowContent: @escaping (Data.Element) -> RowContent) where Content == OutlineGroup<Data, ID, RowContent, RowContent, DisclosureGroup<RowContent, OutlineSubgroupChildren>>, Data : RandomAccessCollection, ID : Hashable, RowContent : View

    @MainActor public init<RowContent>(_ data: Range<Int>, @ViewBuilder rowContent: @escaping (Int) -> RowContent) where Content == ForEach<Range<Int>, Int, RowContent>, RowContent : View
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension List {

    @available(watchOS, unavailable)
    @MainActor public init<Data, RowContent>(_ data: Binding<Data>, selection: Binding<Set<SelectionValue>>?, @ViewBuilder rowContent: @escaping (Binding<Data.Element>) -> RowContent) where Content == ForEach<LazyMapSequence<Data.Indices, (Data.Index, Data.Element.ID)>, Data.Element.ID, RowContent>, Data : MutableCollection, Data : RandomAccessCollection, RowContent : View, Data.Element : Identifiable, Data.Index : Hashable

    @available(watchOS, unavailable)
    @MainActor public init<Data, ID, RowContent>(_ data: Binding<Data>, id: KeyPath<Data.Element, ID>, selection: Binding<Set<SelectionValue>>?, @ViewBuilder rowContent: @escaping (Binding<Data.Element>) -> RowContent) where Content == ForEach<LazyMapSequence<Data.Indices, (Data.Index, ID)>, ID, RowContent>, Data : MutableCollection, Data : RandomAccessCollection, ID : Hashable, RowContent : View, Data.Index : Hashable

    @available(watchOS, unavailable)
    @MainActor public init<Data, RowContent>(_ data: Binding<Data>, selection: Binding<SelectionValue?>?, @ViewBuilder rowContent: @escaping (Binding<Data.Element>) -> RowContent) where Content == ForEach<LazyMapSequence<Data.Indices, (Data.Index, Data.Element.ID)>, Data.Element.ID, RowContent>, Data : MutableCollection, Data : RandomAccessCollection, RowContent : View, Data.Element : Identifiable, Data.Index : Hashable

    @available(watchOS, unavailable)
    @MainActor public init<Data, ID, RowContent>(_ data: Binding<Data>, id: KeyPath<Data.Element, ID>, selection: Binding<SelectionValue?>?, @ViewBuilder rowContent: @escaping (Binding<Data.Element>) -> RowContent) where Content == ForEach<LazyMapSequence<Data.Indices, (Data.Index, ID)>, ID, RowContent>, Data : MutableCollection, Data : RandomAccessCollection, ID : Hashable, RowContent : View, Data.Index : Hashable
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension List where SelectionValue == Never {

    @MainActor public init<Data, RowContent>(_ data: Binding<Data>, @ViewBuilder rowContent: @escaping (Binding<Data.Element>) -> RowContent) where Content == ForEach<LazyMapSequence<Data.Indices, (Data.Index, Data.Element.ID)>, Data.Element.ID, RowContent>, Data : MutableCollection, Data : RandomAccessCollection, RowContent : View, Data.Element : Identifiable, Data.Index : Hashable

    @MainActor public init<Data, ID, RowContent>(_ data: Binding<Data>, id: KeyPath<Data.Element, ID>, @ViewBuilder rowContent: @escaping (Binding<Data.Element>) -> RowContent) where Content == ForEach<LazyMapSequence<Data.Indices, (Data.Index, ID)>, ID, RowContent>, Data : MutableCollection, Data : RandomAccessCollection, ID : Hashable, RowContent : View, Data.Index : Hashable
}

@available(iOS 15.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension List {

    @MainActor public init<Data, RowContent>(_ data: Binding<Data>, children: WritableKeyPath<Data.Element, Data?>, selection: Binding<Set<SelectionValue>>?, @ViewBuilder rowContent: @escaping (Binding<Data.Element>) -> RowContent) where Content == OutlineGroup<Binding<Data>, Data.Element.ID, RowContent, RowContent, DisclosureGroup<RowContent, OutlineSubgroupChildren>>, Data : MutableCollection, Data : RandomAccessCollection, RowContent : View, Data.Element : Identifiable

    @available(iOS 16.0, macOS 13.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    @MainActor public init<Data, RowContent>(_ data: Binding<Data>, children: WritableKeyPath<Data.Element, Data?>, selection: Binding<SelectionValue>, @ViewBuilder rowContent: @escaping (Binding<Data.Element>) -> RowContent) where Content == OutlineGroup<Binding<Data>, Data.Element.ID, RowContent, RowContent, DisclosureGroup<RowContent, OutlineSubgroupChildren>>, Data : MutableCollection, Data : RandomAccessCollection, RowContent : View, Data.Element : Identifiable

    @MainActor public init<Data, ID, RowContent>(_ data: Binding<Data>, id: KeyPath<Data.Element, ID>, children: WritableKeyPath<Data.Element, Data?>, selection: Binding<Set<SelectionValue>>?, @ViewBuilder rowContent: @escaping (Binding<Data.Element>) -> RowContent) where Content == OutlineGroup<Binding<Data>, ID, RowContent, RowContent, DisclosureGroup<RowContent, OutlineSubgroupChildren>>, Data : MutableCollection, Data : RandomAccessCollection, ID : Hashable, RowContent : View

    @available(iOS 16.0, macOS 13.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    @MainActor public init<Data, ID, RowContent>(_ data: Binding<Data>, id: KeyPath<Data.Element, ID>, children: WritableKeyPath<Data.Element, Data?>, selection: Binding<SelectionValue>, @ViewBuilder rowContent: @escaping (Binding<Data.Element>) -> RowContent) where Content == OutlineGroup<Binding<Data>, ID, RowContent, RowContent, DisclosureGroup<RowContent, OutlineSubgroupChildren>>, Data : MutableCollection, Data : RandomAccessCollection, ID : Hashable, RowContent : View

    @MainActor public init<Data, RowContent>(_ data: Binding<Data>, children: WritableKeyPath<Data.Element, Data?>, selection: Binding<SelectionValue?>?, @ViewBuilder rowContent: @escaping (Binding<Data.Element>) -> RowContent) where Content == OutlineGroup<Binding<Data>, Data.Element.ID, RowContent, RowContent, DisclosureGroup<RowContent, OutlineSubgroupChildren>>, Data : MutableCollection, Data : RandomAccessCollection, RowContent : View, Data.Element : Identifiable

    @MainActor public init<Data, ID, RowContent>(_ data: Binding<Data>, id: KeyPath<Data.Element, ID>, children: WritableKeyPath<Data.Element, Data?>, selection: Binding<SelectionValue?>?, @ViewBuilder rowContent: @escaping (Binding<Data.Element>) -> RowContent) where Content == OutlineGroup<Binding<Data>, ID, RowContent, RowContent, DisclosureGroup<RowContent, OutlineSubgroupChildren>>, Data : MutableCollection, Data : RandomAccessCollection, ID : Hashable, RowContent : View
}

@available(iOS 15.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension List where SelectionValue == Never {

    @MainActor public init<Data, RowContent>(_ data: Binding<Data>, children: WritableKeyPath<Data.Element, Data?>, @ViewBuilder rowContent: @escaping (Binding<Data.Element>) -> RowContent) where Content == OutlineGroup<Binding<Data>, Data.Element.ID, RowContent, RowContent, DisclosureGroup<RowContent, OutlineSubgroupChildren>>, Data : MutableCollection, Data : RandomAccessCollection, RowContent : View, Data.Element : Identifiable

    @MainActor public init<Data, ID, RowContent>(_ data: Binding<Data>, id: KeyPath<Data.Element, ID>, children: WritableKeyPath<Data.Element, Data?>, @ViewBuilder rowContent: @escaping (Binding<Data.Element>) -> RowContent) where Content == OutlineGroup<Binding<Data>, ID, RowContent, RowContent, DisclosureGroup<RowContent, OutlineSubgroupChildren>>, Data : MutableCollection, Data : RandomAccessCollection, ID : Hashable, RowContent : View
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension List {

    @available(watchOS, unavailable)
    @MainActor public init<Data, RowContent>(_ data: Binding<Data>, edits: EditOperations<Data>, selection: Binding<Set<SelectionValue>>?, @ViewBuilder rowContent: @escaping (Binding<Data.Element>) -> RowContent) where Content == ForEach<IndexedIdentifierCollection<Data, Data.Element.ID>, Data.Element.ID, EditableCollectionContent<RowContent, Data>>, Data : MutableCollection, Data : RandomAccessCollection, RowContent : View, Data.Element : Identifiable, Data.Index : Hashable

    @available(iOS 16.0, macOS 13.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    @MainActor public init<Data, RowContent>(_ data: Binding<Data>, edits: EditOperations<Data>, selection: Binding<SelectionValue>, @ViewBuilder rowContent: @escaping (Binding<Data.Element>) -> RowContent) where Content == ForEach<IndexedIdentifierCollection<Data, Data.Element.ID>, Data.Element.ID, EditableCollectionContent<RowContent, Data>>, Data : MutableCollection, Data : RandomAccessCollection, RowContent : View, Data.Element : Identifiable, Data.Index : Hashable

    @available(watchOS, unavailable)
    @MainActor public init<Data, ID, RowContent>(_ data: Binding<Data>, id: KeyPath<Data.Element, ID>, edits: EditOperations<Data>, selection: Binding<Set<SelectionValue>>?, @ViewBuilder rowContent: @escaping (Binding<Data.Element>) -> RowContent) where Content == ForEach<IndexedIdentifierCollection<Data, ID>, ID, EditableCollectionContent<RowContent, Data>>, Data : MutableCollection, Data : RandomAccessCollection, ID : Hashable, RowContent : View, Data.Index : Hashable

    @available(watchOS, unavailable)
    @available(tvOS, unavailable)
    @MainActor public init<Data, ID, RowContent>(_ data: Binding<Data>, id: KeyPath<Data.Element, ID>, edits: EditOperations<Data>, selection: Binding<SelectionValue>, @ViewBuilder rowContent: @escaping (Binding<Data.Element>) -> RowContent) where Content == ForEach<IndexedIdentifierCollection<Data, ID>, ID, EditableCollectionContent<RowContent, Data>>, Data : MutableCollection, Data : RandomAccessCollection, ID : Hashable, RowContent : View, Data.Index : Hashable
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension List {

    @available(watchOS, unavailable)
    @MainActor public init<Data, RowContent>(_ data: Binding<Data>, edits: EditOperations<Data>, selection: Binding<SelectionValue?>?, @ViewBuilder rowContent: @escaping (Binding<Data.Element>) -> RowContent) where Content == ForEach<IndexedIdentifierCollection<Data, Data.Element.ID>, Data.Element.ID, EditableCollectionContent<RowContent, Data>>, Data : MutableCollection, Data : RandomAccessCollection, RowContent : View, Data.Element : Identifiable, Data.Index : Hashable

    @available(watchOS, unavailable)
    @MainActor public init<Data, ID, RowContent>(_ data: Binding<Data>, id: KeyPath<Data.Element, ID>, edits: EditOperations<Data>, selection: Binding<SelectionValue?>?, @ViewBuilder rowContent: @escaping (Binding<Data.Element>) -> RowContent) where Content == ForEach<IndexedIdentifierCollection<Data, ID>, ID, EditableCollectionContent<RowContent, Data>>, Data : MutableCollection, Data : RandomAccessCollection, ID : Hashable, RowContent : View, Data.Index : Hashable
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension List where SelectionValue == Never {

    @MainActor public init<Data, RowContent>(_ data: Binding<Data>, edits: EditOperations<Data>, @ViewBuilder rowContent: @escaping (Binding<Data.Element>) -> RowContent) where Content == ForEach<IndexedIdentifierCollection<Data, Data.Element.ID>, Data.Element.ID, EditableCollectionContent<RowContent, Data>>, Data : MutableCollection, Data : RandomAccessCollection, RowContent : View, Data.Element : Identifiable, Data.Index : Hashable

    @MainActor public init<Data, ID, RowContent>(_ data: Binding<Data>, id: KeyPath<Data.Element, ID>, edits: EditOperations<Data>, @ViewBuilder rowContent: @escaping (Binding<Data.Element>) -> RowContent) where Content == ForEach<IndexedIdentifierCollection<Data, ID>, ID, EditableCollectionContent<RowContent, Data>>, Data : MutableCollection, Data : RandomAccessCollection, ID : Hashable, RowContent : View, Data.Index : Hashable
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public struct ListItemTint {

    public static func fixed(_ tint: Color) -> ListItemTint

    public static func preferred(_ tint: Color) -> ListItemTint

    public static let monochrome: ListItemTint
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public protocol ListStyle {
}

@available(iOS 14.0, macOS 10.15, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension ListStyle where Self == SidebarListStyle {

    public static var sidebar: SidebarListStyle { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ListStyle where Self == PlainListStyle {

    public static var plain: PlainListStyle { get }
}

@available(macOS 12.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension ListStyle where Self == BorderedListStyle {

    public static var bordered: BorderedListStyle { get }

    public static func bordered(alternatesRowBackgrounds: Bool) -> BorderedListStyle
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension ListStyle where Self == InsetListStyle {

    public static var inset: InsetListStyle { get }

    @available(macOS 12.0, *)
    @available(iOS, unavailable)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public static func inset(alternatesRowBackgrounds: Bool) -> InsetListStyle
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ListStyle where Self == DefaultListStyle {

    public static var automatic: DefaultListStyle { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct LocalizedStringKey : Equatable, ExpressibleByStringInterpolation {

    public init(_ value: String)

    public init(stringLiteral value: String)

    public init(stringInterpolation: LocalizedStringKey.StringInterpolation)

    public struct StringInterpolation : StringInterpolationProtocol {

                                                                        public init(literalCapacity: Int, interpolationCount: Int)

                                public mutating func appendLiteral(_ literal: String)

                                public mutating func appendInterpolation(_ string: String)

                                                public mutating func appendInterpolation<Subject>(_ subject: Subject, formatter: Formatter? = nil) where Subject : ReferenceConvertible

                                                                                                                            public mutating func appendInterpolation<Subject>(_ subject: Subject, formatter: Formatter? = nil) where Subject : NSObject

                                                                                            @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
        public mutating func appendInterpolation<F>(_ input: F.FormatInput, format: F) where F : FormatStyle, F.FormatInput : Equatable, F.FormatOutput == String

                                                    public mutating func appendInterpolation<T>(_ value: T) where T : _FormatSpecifiable

                                                                    public mutating func appendInterpolation<T>(_ value: T, specifier: String) where T : _FormatSpecifiable

                                        @available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
        public mutating func appendInterpolation(_ text: Text)

                                                                                                                                                                                                            @available(macOS 12.0, iOS 15.0, tvOS 15.0, watchOS 8.0, *)
        public mutating func appendInterpolation(_ attributedString: AttributedString)

            public typealias StringLiteralType = String
    }

    public static func == (a: LocalizedStringKey, b: LocalizedStringKey) -> Bool

    public typealias ExtendedGraphemeClusterLiteralType = String

    public typealias StringLiteralType = String

    public typealias UnicodeScalarLiteralType = String
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension LocalizedStringKey.StringInterpolation {

    public mutating func appendInterpolation(_ image: Image)
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension LocalizedStringKey.StringInterpolation {

    public mutating func appendInterpolation(_ date: Date, style: Text.DateStyle)

    public mutating func appendInterpolation(_ dates: ClosedRange<Date>)

    public mutating func appendInterpolation(_ interval: DateInterval)
}

@available(iOS 13.0, macOS 10.15, watchOS 6.0, tvOS 14.0, *)
public struct LongPressGesture : Gesture {

    public var minimumDuration: Double

    @available(tvOS, unavailable)
    public var maximumDistance: CGFloat

    @available(tvOS, unavailable)
    public init(minimumDuration: Double = 0.5, maximumDistance: CGFloat = 10)

    public typealias Body = Never

    public typealias Value = Bool
}

@available(iOS 13.0, macOS 10.15, *)
@available(watchOS, unavailable)
@available(tvOS, unavailable)
public struct MagnificationGesture : Gesture {

    public var minimumScaleDelta: CGFloat

    public init(minimumScaleDelta: CGFloat = 0.01)

    public typealias Body = Never

    public typealias Value = CGFloat
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
@frozen public struct MatchedGeometryProperties : OptionSet {

    public let rawValue: UInt32

    @inlinable public init(rawValue: UInt32)

    public static let position: MatchedGeometryProperties

    public static let size: MatchedGeometryProperties

    public static let frame: MatchedGeometryProperties

    public typealias ArrayLiteralElement = MatchedGeometryProperties

    public typealias Element = MatchedGeometryProperties

    public typealias RawValue = UInt32
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension MatchedGeometryProperties : Sendable {
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
public struct Material {
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, *)
@available(watchOS, unavailable)
extension Material {

    public static let regular: Material

    public static let thick: Material

    public static let thin: Material

    public static let ultraThin: Material

    public static let ultraThick: Material
}

@available(iOS 15.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension Material {

    public static let bar: Material
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension Material : ShapeStyle {
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct Menu<Label, Content> : View where Label : View, Content : View {

    @MainActor public var body: some View { get }

    public typealias Body = some View
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension Menu {

    public init(@ViewBuilder content: () -> Content, @ViewBuilder label: () -> Label)

    public init(_ titleKey: LocalizedStringKey, @ViewBuilder content: () -> Content) where Label == Text

    public init<S>(_ title: S, @ViewBuilder content: () -> Content) where Label == Text, S : StringProtocol
}

@available(iOS 15.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension Menu {

    public init(@ViewBuilder content: () -> Content, @ViewBuilder label: () -> Label, primaryAction: @escaping () -> Void)

    public init(_ titleKey: LocalizedStringKey, @ViewBuilder content: () -> Content, primaryAction: @escaping () -> Void) where Label == Text

    public init<S>(_ title: S, @ViewBuilder content: () -> Content, primaryAction: @escaping () -> Void) where Label == Text, S : StringProtocol
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension Menu where Label == MenuStyleConfiguration.Label, Content == MenuStyleConfiguration.Content {

    public init(_ configuration: MenuStyleConfiguration)
}

@available(macOS 13.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct MenuBarExtra<Label, Content> : Scene where Label : View, Content : View {

    public init(isInserted: Binding<Bool>, @ViewBuilder content: () -> Content, @ViewBuilder label: () -> Label)

    public init(@ViewBuilder content: () -> Content, @ViewBuilder label: () -> Label)

    @MainActor public var body: some Scene { get }

    public typealias Body = some Scene
}

@available(macOS 13.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension MenuBarExtra where Label == Text {

    public init(_ titleKey: LocalizedStringKey, isInserted: Binding<Bool>, @ViewBuilder content: () -> Content)

    public init<S>(_ title: S, isInserted: Binding<Bool>, @ViewBuilder content: () -> Content) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, @ViewBuilder content: () -> Content)

    public init<S>(_ title: S, @ViewBuilder content: () -> Content) where S : StringProtocol
}

@available(macOS 13.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension MenuBarExtra where Label == Label<Text, Image> {

    public init(_ titleKey: LocalizedStringKey, image: String, isInserted: Binding<Bool>, @ViewBuilder content: () -> Content)

    public init<S>(_ title: S, image: String, isInserted: Binding<Bool>, @ViewBuilder content: () -> Content) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, systemImage: String, isInserted: Binding<Bool>, @ViewBuilder content: () -> Content)

    public init<S>(_ title: S, systemImage: String, isInserted: Binding<Bool>, @ViewBuilder content: () -> Content) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, image: String, @ViewBuilder content: () -> Content)

    public init<S>(_ title: S, image: String, @ViewBuilder content: () -> Content) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, systemImage: String, @ViewBuilder content: () -> Content)

    public init<S>(_ title: S, systemImage: String, @ViewBuilder content: () -> Content) where S : StringProtocol
}

@available(macOS 13.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public protocol MenuBarExtraStyle {
}

@available(macOS 13.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension MenuBarExtraStyle where Self == WindowMenuBarExtraStyle {

    public static var window: WindowMenuBarExtraStyle { get }
}

@available(macOS 13.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension MenuBarExtraStyle where Self == AutomaticMenuBarExtraStyle {

    public static var automatic: AutomaticMenuBarExtraStyle { get }
}

@available(macOS 13.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension MenuBarExtraStyle where Self == PullDownMenuBarExtraStyle {

    public static var menu: PullDownMenuBarExtraStyle { get }
}

@available(iOS, unavailable)
@available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Use `Menu` instead.")
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct MenuButton<Label, Content> : View where Label : View, Content : View {

    public init(label: Label, @ViewBuilder content: () -> Content)

    @MainActor public var body: some View { get }

    public typealias Body = some View
}

@available(iOS, unavailable)
@available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Use `Menu` instead.")
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension MenuButton where Label == Text {

    public init(_ titleKey: LocalizedStringKey, @ViewBuilder content: () -> Content)

    public init<S>(_ title: S, @ViewBuilder content: () -> Content) where S : StringProtocol
}

@available(iOS, unavailable)
@available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Use `MenuStyle` instead.")
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public protocol MenuButtonStyle {
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public struct MenuOrder : Equatable, Hashable {

    public static let automatic: MenuOrder

    public static let fixed: MenuOrder

    public static func == (a: MenuOrder, b: MenuOrder) -> Bool

    public func hash(into hasher: inout Hasher)

    public var hashValue: Int { get }
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct MenuPickerStyle : PickerStyle {

    public init()
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public protocol MenuStyle {

    associatedtype Body : View

    @ViewBuilder func makeBody(configuration: Self.Configuration) -> Self.Body

    typealias Configuration = MenuStyleConfiguration
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension MenuStyle where Self == DefaultMenuStyle {

    public static var automatic: DefaultMenuStyle { get }
}

@available(iOS 16.0, macOS 13.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension MenuStyle where Self == ButtonMenuStyle {

    public static var button: ButtonMenuStyle { get }
}

@available(iOS, unavailable)
@available(macOS, introduced: 11.0, deprecated: 100000.0, message: "Use .menuStyle(.button) and .buttonStyle(.bordered).")
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension MenuStyle where Self == BorderedButtonMenuStyle {

    public static var borderedButton: BorderedButtonMenuStyle { get }
}

@available(iOS, introduced: 14.0, deprecated: 100000.0, message: "Use .menuStyle(.button) and .buttonStyle(.borderless).")
@available(macOS, introduced: 11.0, deprecated: 100000.0, message: "Use .menuStyle(.button) and .buttonStyle(.borderless).")
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension MenuStyle where Self == BorderlessButtonMenuStyle {

    public static var borderlessButton: BorderlessButtonMenuStyle { get }
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct MenuStyleConfiguration {

    public struct Label : View {

                        public typealias Body = Never
    }

    public struct Content : View {

                        public typealias Body = Never
    }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct ModifiedContent<Content, Modifier> {

    public typealias Body = Never

    public var content: Content

    public var modifier: Modifier

    @inlinable public init(content: Content, modifier: Modifier)
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension ModifiedContent : TableRowContent where Content : TableRowContent, Modifier : _TableRowContentModifier {

    public typealias TableRowValue = Content.TableRowValue

    public typealias TableRowBody = Never

    public var tableRowBody: Never { get }
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension ModifiedContent : DynamicTableRowContent where Content : DynamicTableRowContent, Modifier : _TableRowContentModifier {

    public var data: Content.Data { get }

    public typealias Data = Content.Data
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension ModifiedContent where Modifier == AccessibilityAttachmentModifier {

    public func accessibilityRespondsToUserInteraction(_ respondsToUserInteraction: Bool = true) -> ModifiedContent<Content, Modifier>
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension ModifiedContent where Modifier == AccessibilityAttachmentModifier {

    public func accessibilityTextContentType(_ textContentType: AccessibilityTextContentType) -> ModifiedContent<Content, Modifier>

    public func accessibilityHeading(_ level: AccessibilityHeadingLevel) -> ModifiedContent<Content, Modifier>
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ModifiedContent : Equatable where Content : Equatable, Modifier : Equatable {

    public static func == (a: ModifiedContent<Content, Modifier>, b: ModifiedContent<Content, Modifier>) -> Bool
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ModifiedContent : View where Content : View, Modifier : ViewModifier {

    @MainActor public var body: ModifiedContent<Content, Modifier>.Body { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ModifiedContent : ViewModifier where Content : ViewModifier, Modifier : ViewModifier {
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ModifiedContent where Modifier == AccessibilityAttachmentModifier {

    public func accessibilityLabel(_ label: Text) -> ModifiedContent<Content, Modifier>

    public func accessibilityLabel(_ labelKey: LocalizedStringKey) -> ModifiedContent<Content, Modifier>

    public func accessibilityLabel<S>(_ label: S) -> ModifiedContent<Content, Modifier> where S : StringProtocol
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ModifiedContent : Scene where Content : Scene, Modifier : _SceneModifier {

    @MainActor public var body: ModifiedContent<Content, Modifier>.Body { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ModifiedContent where Modifier == AccessibilityAttachmentModifier {

    public func accessibilityAction(_ actionKind: AccessibilityActionKind = .default, _ handler: @escaping () -> Void) -> ModifiedContent<Content, Modifier>

    public func accessibilityAction(named name: Text, _ handler: @escaping () -> Void) -> ModifiedContent<Content, Modifier>
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ModifiedContent where Modifier == AccessibilityAttachmentModifier {

    public func accessibilityAction(named nameKey: LocalizedStringKey, _ handler: @escaping () -> Void) -> ModifiedContent<Content, Modifier>

    public func accessibilityAction<S>(named name: S, _ handler: @escaping () -> Void) -> ModifiedContent<Content, Modifier> where S : StringProtocol
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ModifiedContent : DynamicViewContent where Content : DynamicViewContent, Modifier : ViewModifier {

    public var data: Content.Data { get }

    public typealias Data = Content.Data
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ModifiedContent where Modifier == AccessibilityAttachmentModifier {

    public func accessibilityScrollAction(_ handler: @escaping (Edge) -> Void) -> ModifiedContent<Content, Modifier>
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ModifiedContent where Modifier == AccessibilityAttachmentModifier {

    public func accessibilityActivationPoint(_ activationPoint: CGPoint) -> ModifiedContent<Content, Modifier>

    public func accessibilityActivationPoint(_ activationPoint: UnitPoint) -> ModifiedContent<Content, Modifier>
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ModifiedContent where Modifier == AccessibilityAttachmentModifier {

    public func accessibilityHint(_ hint: Text) -> ModifiedContent<Content, Modifier>

    public func accessibilityInputLabels(_ inputLabels: [Text]) -> ModifiedContent<Content, Modifier>

    public func accessibilityIdentifier(_ identifier: String) -> ModifiedContent<Content, Modifier>
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ModifiedContent where Modifier == AccessibilityAttachmentModifier {

    public func accessibilityHint(_ hintKey: LocalizedStringKey) -> ModifiedContent<Content, Modifier>

    public func accessibilityHint<S>(_ hint: S) -> ModifiedContent<Content, Modifier> where S : StringProtocol

    public func accessibilityInputLabels(_ inputLabelKeys: [LocalizedStringKey]) -> ModifiedContent<Content, Modifier>

    public func accessibilityInputLabels<S>(_ inputLabels: [S]) -> ModifiedContent<Content, Modifier> where S : StringProtocol
}

extension ModifiedContent where Modifier == AccessibilityAttachmentModifier {

    @available(iOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityHidden(_:)")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, renamed: "accessibilityHidden(_:)")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityHidden(_:)")
    @available(watchOS, introduced: 6, deprecated: 100000.0, renamed: "accessibilityHidden(_:)")
    public func accessibility(hidden: Bool) -> ModifiedContent<Content, Modifier>

    @available(iOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityLabel(_:)")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, renamed: "accessibilityLabel(_:)")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityLabel(_:)")
    @available(watchOS, introduced: 6, deprecated: 100000.0, renamed: "accessibilityLabel(_:)")
    public func accessibility(label: Text) -> ModifiedContent<Content, Modifier>

    @available(iOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityHint(_:)")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, renamed: "accessibilityHint(_:)")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityHint(_:)")
    @available(watchOS, introduced: 6, deprecated: 100000.0, renamed: "accessibilityHint(_:)")
    public func accessibility(hint: Text) -> ModifiedContent<Content, Modifier>

    @available(iOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityInputLabels(_:)")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, renamed: "accessibilityInputLabels(_:)")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityInputLabels(_:)")
    @available(watchOS, introduced: 6, deprecated: 100000.0, renamed: "accessibilityInputLabels(_:)")
    public func accessibility(inputLabels: [Text]) -> ModifiedContent<Content, Modifier>

    @available(iOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityIdentifier(_:)")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, renamed: "accessibilityIdentifier(_:)")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityIdentifier(_:)")
    @available(watchOS, introduced: 6, deprecated: 100000.0, renamed: "accessibilityIdentifier(_:)")
    public func accessibility(identifier: String) -> ModifiedContent<Content, Modifier>

    @available(iOS, deprecated, introduced: 13.0)
    @available(macOS, deprecated, introduced: 10.15)
    @available(tvOS, deprecated, introduced: 13.0)
    @available(watchOS, deprecated, introduced: 6)
    public func accessibility(selectionIdentifier: AnyHashable) -> ModifiedContent<Content, Modifier>

    @available(iOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilitySortPriority(_:)")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, renamed: "accessibilitySortPriority(_:)")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilitySortPriority(_:)")
    @available(watchOS, introduced: 6, deprecated: 100000.0, renamed: "accessibilitySortPriority(_:)")
    public func accessibility(sortPriority: Double) -> ModifiedContent<Content, Modifier>

    @available(iOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityActivationPoint(_:)")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, renamed: "accessibilityActivationPoint(_:)")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityActivationPoint(_:)")
    @available(watchOS, introduced: 6, deprecated: 100000.0, renamed: "accessibilityActivationPoint(_:)")
    public func accessibility(activationPoint: CGPoint) -> ModifiedContent<Content, Modifier>

    @available(iOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityActivationPoint(_:)")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, renamed: "accessibilityActivationPoint(_:)")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityActivationPoint(_:)")
    @available(watchOS, introduced: 6, deprecated: 100000.0, renamed: "accessibilityActivationPoint(_:)")
    public func accessibility(activationPoint: UnitPoint) -> ModifiedContent<Content, Modifier>
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ModifiedContent where Modifier == AccessibilityAttachmentModifier {

    public func accessibilityAdjustableAction(_ handler: @escaping (AccessibilityAdjustmentDirection) -> Void) -> ModifiedContent<Content, Modifier>
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension ModifiedContent where Modifier == AccessibilityAttachmentModifier {

    public func accessibilityCustomContent(_ key: AccessibilityCustomContentKey, _ value: Text?, importance: AXCustomContent.Importance = .default) -> ModifiedContent<Content, Modifier>

    public func accessibilityCustomContent(_ key: AccessibilityCustomContentKey, _ valueKey: LocalizedStringKey, importance: AXCustomContent.Importance = .default) -> ModifiedContent<Content, Modifier>

    public func accessibilityCustomContent<V>(_ key: AccessibilityCustomContentKey, _ value: V, importance: AXCustomContent.Importance = .default) -> ModifiedContent<Content, Modifier> where V : StringProtocol

    public func accessibilityCustomContent(_ label: Text, _ value: Text, importance: AXCustomContent.Importance = .default) -> ModifiedContent<Content, Modifier>

    public func accessibilityCustomContent(_ labelKey: LocalizedStringKey, _ value: Text, importance: AXCustomContent.Importance = .default) -> ModifiedContent<Content, Modifier>

    public func accessibilityCustomContent(_ labelKey: LocalizedStringKey, _ valueKey: LocalizedStringKey, importance: AXCustomContent.Importance = .default) -> ModifiedContent<Content, Modifier>

    public func accessibilityCustomContent<V>(_ labelKey: LocalizedStringKey, _ value: V, importance: AXCustomContent.Importance = .default) -> ModifiedContent<Content, Modifier> where V : StringProtocol
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ModifiedContent where Modifier == AccessibilityAttachmentModifier {

    public func accessibilitySortPriority(_ sortPriority: Double) -> ModifiedContent<Content, Modifier>
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ModifiedContent where Modifier == AccessibilityAttachmentModifier {

    public func accessibilityHidden(_ hidden: Bool) -> ModifiedContent<Content, Modifier>
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ModifiedContent where Modifier == AccessibilityAttachmentModifier {

    public func accessibilityValue(_ valueDescription: Text) -> ModifiedContent<Content, Modifier>
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ModifiedContent where Modifier == AccessibilityAttachmentModifier {

    public func accessibilityValue(_ valueKey: LocalizedStringKey) -> ModifiedContent<Content, Modifier>

    public func accessibilityValue<S>(_ value: S) -> ModifiedContent<Content, Modifier> where S : StringProtocol
}

extension ModifiedContent where Modifier == AccessibilityAttachmentModifier {

    @available(iOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityValue(_:)")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, renamed: "accessibilityValue(_:)")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityValue(_:)")
    @available(watchOS, introduced: 6, deprecated: 100000.0, renamed: "accessibilityValue(_:)")
    public func accessibility(value: Text) -> ModifiedContent<Content, Modifier>
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ModifiedContent where Modifier == AccessibilityAttachmentModifier {

    public func accessibilityAddTraits(_ traits: AccessibilityTraits) -> ModifiedContent<Content, Modifier>

    public func accessibilityRemoveTraits(_ traits: AccessibilityTraits) -> ModifiedContent<Content, Modifier>
}

extension ModifiedContent where Modifier == AccessibilityAttachmentModifier {

    @available(iOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityAddTraits(_:)")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, renamed: "accessibilityAddTraits(_:)")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityAddTraits(_:)")
    @available(watchOS, introduced: 6, deprecated: 100000.0, renamed: "accessibilityAddTraits(_:)")
    public func accessibility(addTraits traits: AccessibilityTraits) -> ModifiedContent<Content, Modifier>

    @available(iOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityRemoveTraits(_:)")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, renamed: "accessibilityRemoveTraits(_:)")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityRemoveTraits(_:)")
    @available(watchOS, introduced: 6, deprecated: 100000.0, renamed: "accessibilityRemoveTraits(_:)")
    public func accessibility(removeTraits traits: AccessibilityTraits) -> ModifiedContent<Content, Modifier>
}

@available(macOS 10.15, tvOS 13.0, *)
@available(iOS, unavailable)
@available(watchOS, unavailable)
public enum MoveCommandDirection {

    case up

    case down

    case left

    case right

    public static func == (a: MoveCommandDirection, b: MoveCommandDirection) -> Bool

    public func hash(into hasher: inout Hasher)

    public var hashValue: Int { get }
}

@available(macOS 10.15, tvOS 13.0, *)
@available(iOS, unavailable)
@available(watchOS, unavailable)
extension MoveCommandDirection : Equatable {
}

@available(macOS 10.15, tvOS 13.0, *)
@available(iOS, unavailable)
@available(watchOS, unavailable)
extension MoveCommandDirection : Hashable {
}

@available(macOS 11.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
@MainActor @propertyWrapper public struct NSApplicationDelegateAdaptor<DelegateType> : DynamicProperty where DelegateType : NSObject, DelegateType : NSApplicationDelegate {

    @MainActor public var wrappedValue: DelegateType { get }

    @MainActor public init(_ delegateType: DelegateType.Type = DelegateType.self)
}

@available(macOS 11.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension NSApplicationDelegateAdaptor where DelegateType : ObservableObject {

    @MainActor public init(_ delegateType: DelegateType.Type = DelegateType.self)

    @MainActor public var projectedValue: ObservedObject<DelegateType>.Wrapper { get }
}

@available(macOS 11.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension NSApplicationDelegateAdaptor : Sendable {
}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
@MainActor open class NSHostingController<Content> : NSViewController where Content : View {

    @MainActor public init(rootView: Content)

    @MainActor public init?(coder: NSCoder, rootView: Content)

    @MainActor required dynamic public init?(coder: NSCoder)

    @MainActor public var rootView: Content

    @MainActor override dynamic open var identifier: NSUserInterfaceItemIdentifier?

    @available(macOS 13.0, *)
    @available(iOS, unavailable)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    @MainActor public var sizingOptions: NSHostingSizingOptions

    @MainActor override dynamic open var preferredContentSize: NSSize

    @MainActor public func sizeThatFits(in size: CGSize) -> CGSize
}

@available(macOS 13.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct NSHostingSizingOptions : OptionSet {

    public let rawValue: Int

    public init(rawValue: Int)

    public static let minSize: NSHostingSizingOptions

    public static let intrinsicContentSize: NSHostingSizingOptions

    public static let maxSize: NSHostingSizingOptions

    public static let preferredContentSize: NSHostingSizingOptions

    public static let standardBounds: NSHostingSizingOptions

    public typealias ArrayLiteralElement = NSHostingSizingOptions

    public typealias Element = NSHostingSizingOptions

    public typealias RawValue = Int
}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
@MainActor open class NSHostingView<Content> : NSView, NSUserInterfaceValidations, NSDraggingSource where Content : View {

    @available(macOS 13.0, *)
    @available(iOS, unavailable)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    @MainActor public var sizingOptions: NSHostingSizingOptions

    @MainActor required public init(rootView: Content)

    @MainActor required dynamic public init?(coder aDecoder: NSCoder)

    @MainActor override final public var isFlipped: Bool

    @MainActor override dynamic open func renewGState()

    @MainActor override dynamic open var firstBaselineOffsetFromTop: CGFloat { get }

    @MainActor override dynamic open var lastBaselineOffsetFromBottom: CGFloat { get }

    @MainActor open var firstTextLineCenter: CGFloat? { get }

    @MainActor override dynamic open var intrinsicContentSize: NSSize { get }

    @MainActor override dynamic open class var requiresConstraintBasedLayout: Bool { get }

    @MainActor override dynamic open func updateConstraints()

    @MainActor override dynamic open var layerContentsRedrawPolicy: NSView.LayerContentsRedrawPolicy

    @MainActor override dynamic open func layout()

    @MainActor override dynamic open func setFrameSize(_ newSize: NSSize)

    @MainActor public var rootView: Content

    @MainActor override dynamic open func viewDidChangeBackingProperties()

    @MainActor override dynamic open func viewDidChangeEffectiveAppearance()

    @MainActor override dynamic open var userInterfaceLayoutDirection: NSUserInterfaceLayoutDirection

    @MainActor override dynamic open func viewWillMove(toWindow newWindow: NSWindow?)

    @MainActor override dynamic open func viewDidMoveToWindow()

    @MainActor override dynamic open func didChangeValue(forKey key: String)

    @MainActor override dynamic open func hitTest(_ point: NSPoint) -> NSView?

    @MainActor override dynamic open var needsPanelToBecomeKey: Bool { get }

    @MainActor override dynamic open func magnify(with event: NSEvent)

    @MainActor override dynamic open func rotate(with event: NSEvent)

    @MainActor override dynamic open func mouseDown(with event: NSEvent)

    @MainActor override dynamic open func mouseDragged(with event: NSEvent)

    @MainActor override dynamic open func mouseUp(with event: NSEvent)

    @MainActor override dynamic open func rightMouseDown(with event: NSEvent)

    @MainActor override dynamic open func rightMouseDragged(with event: NSEvent)

    @MainActor override dynamic open func rightMouseUp(with event: NSEvent)

    @MainActor override dynamic open func otherMouseDown(with event: NSEvent)

    @MainActor override dynamic open func otherMouseDragged(with event: NSEvent)

    @MainActor override dynamic open func otherMouseUp(with event: NSEvent)

    @MainActor override dynamic open func performKeyEquivalent(with event: NSEvent) -> Bool

    @MainActor override dynamic open func mouseEntered(with event: NSEvent)

    @MainActor override dynamic open func mouseMoved(with event: NSEvent)

    @MainActor override dynamic open func mouseExited(with event: NSEvent)

    @MainActor override dynamic open func cursorUpdate(with event: NSEvent)

    @MainActor override dynamic open func scrollWheel(with event: NSEvent)

    @MainActor override dynamic open func touchesBegan(with event: NSEvent)

    @MainActor override dynamic open func touchesMoved(with event: NSEvent)

    @MainActor override dynamic open func touchesEnded(with event: NSEvent)

    @MainActor override dynamic open func touchesCancelled(with event: NSEvent)

    @MainActor override dynamic open func menu(for event: NSEvent) -> NSMenu?

    @MainActor override dynamic open func keyDown(with event: NSEvent)

    @MainActor override dynamic open func keyUp(with event: NSEvent)

    @MainActor override dynamic open var accessibilityFocusedUIElement: Any? { get }

    @MainActor override dynamic open func accessibilityChildren() -> [Any]?

    @MainActor override dynamic open func accessibilityChildrenInNavigationOrder() -> [NSAccessibilityElementProtocol]?

    @MainActor override dynamic open func isAccessibilityElement() -> Bool

    @MainActor override dynamic open func accessibilityRole() -> NSAccessibility.Role?

    @MainActor override dynamic open func accessibilitySubrole() -> NSAccessibility.Subrole?

    @MainActor override dynamic open func accessibilityHitTest(_ point: NSPoint) -> Any?

    @MainActor override dynamic open var acceptsFirstResponder: Bool { get }

    @MainActor public func validateUserInterfaceItem(_ item: NSValidatedUserInterfaceItem) -> Bool

    @MainActor override dynamic open func insertText(_ insertString: Any)

    @MainActor override dynamic open func doCommand(by selector: Selector)

    @MainActor override dynamic open func responds(to selector: Selector!) -> Bool

    @MainActor override dynamic open func forwardingTarget(for selector: Selector!) -> Any?

    @MainActor override dynamic open func validRequestor(forSendType sendType: NSPasteboard.PasteboardType?, returnType: NSPasteboard.PasteboardType?) -> Any?

    @MainActor public func draggingSession(_ session: NSDraggingSession, sourceOperationMaskFor context: NSDraggingContext) -> NSDragOperation

    @MainActor public func draggingSession(_ session: NSDraggingSession, willBeginAt screenPoint: NSPoint)

    @MainActor public func draggingSession(_ session: NSDraggingSession, endedAt screenPoint: NSPoint, operation: NSDragOperation)
}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public protocol NSViewControllerRepresentable : View where Self.Body == Never {

    associatedtype NSViewControllerType : NSViewController

    @MainActor func makeNSViewController(context: Self.Context) -> Self.NSViewControllerType

    @MainActor func updateNSViewController(_ nsViewController: Self.NSViewControllerType, context: Self.Context)

    @MainActor static func dismantleNSViewController(_ nsViewController: Self.NSViewControllerType, coordinator: Self.Coordinator)

    associatedtype Coordinator = Void

    @MainActor func makeCoordinator() -> Self.Coordinator

    @available(macOS 13.0, *)
    @MainActor func sizeThatFits(_ proposal: ProposedViewSize, nsViewController: Self.NSViewControllerType, context: Self.Context) -> CGSize?

    typealias Context = NSViewControllerRepresentableContext<Self>
}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension NSViewControllerRepresentable where Self.Coordinator == () {

    public func makeCoordinator() -> Self.Coordinator
}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension NSViewControllerRepresentable {

    public static func dismantleNSViewController(_ nsViewController: Self.NSViewControllerType, coordinator: Self.Coordinator)

    @available(macOS 13.0, *)
    public func sizeThatFits(_ proposal: ProposedViewSize, nsViewController: Self.NSViewControllerType, context: Self.Context) -> CGSize?

    public var body: Never { get }
}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
@MainActor public struct NSViewControllerRepresentableContext<ViewController> where ViewController : NSViewControllerRepresentable {

    @MainActor public let coordinator: ViewController.Coordinator

    @MainActor public var transaction: Transaction { get }

    @MainActor public var environment: EnvironmentValues { get }
}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension NSViewControllerRepresentableContext : Sendable {
}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public protocol NSViewRepresentable : View where Self.Body == Never {

    associatedtype NSViewType : NSView

    @MainActor func makeNSView(context: Self.Context) -> Self.NSViewType

    @MainActor func updateNSView(_ nsView: Self.NSViewType, context: Self.Context)

    @MainActor static func dismantleNSView(_ nsView: Self.NSViewType, coordinator: Self.Coordinator)

    associatedtype Coordinator = Void

    @MainActor func makeCoordinator() -> Self.Coordinator

    @available(macOS 13.0, *)
    @MainActor func sizeThatFits(_ proposal: ProposedViewSize, nsView: Self.NSViewType, context: Self.Context) -> CGSize?

    typealias Context = NSViewRepresentableContext<Self>
}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension NSViewRepresentable where Self.Coordinator == () {

    public func makeCoordinator() -> Self.Coordinator
}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension NSViewRepresentable {

    public static func dismantleNSView(_ nsView: Self.NSViewType, coordinator: Self.Coordinator)

    @available(macOS 13.0, *)
    public func sizeThatFits(_ proposal: ProposedViewSize, nsView: Self.NSViewType, context: Self.Context) -> CGSize?

    public var body: Never { get }
}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
@MainActor public struct NSViewRepresentableContext<View> where View : NSViewRepresentable {

    @MainActor public let coordinator: View.Coordinator

    @MainActor public var transaction: Transaction { get }

    @MainActor public var environment: EnvironmentValues { get }
}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension NSViewRepresentableContext : Sendable {
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
@frozen @propertyWrapper public struct Namespace : DynamicProperty {

    @inlinable public init()

    public var wrappedValue: Namespace.ID { get }

    @frozen public struct ID : Hashable {

                                                            public func hash(into hasher: inout Hasher)

                                        public static func == (a: Namespace.ID, b: Namespace.ID) -> Bool

                                    public var hashValue: Int { get }
    }
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension Namespace : Sendable {
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension Namespace.ID : Sendable {
}

@available(iOS 15.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct NavigationControlGroupStyle : ControlGroupStyle {

    public init()

    @MainActor public func makeBody(configuration: NavigationControlGroupStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public struct NavigationLink<Label, Destination> : View where Label : View, Destination : View {

    public init(@ViewBuilder destination: () -> Destination, @ViewBuilder label: () -> Label)

    @available(iOS, introduced: 13.0, deprecated: 16.0, message: "use NavigationLink(value:label:) inside a NavigationStack or NavigationSplitView")
    @available(macOS, introduced: 10.15, deprecated: 13.0, message: "use NavigationLink(value:label:) inside a NavigationStack or NavigationSplitView")
    @available(tvOS, introduced: 13.0, deprecated: 16.0, message: "use NavigationLink(value:label:) inside a NavigationStack or NavigationSplitView")
    @available(watchOS, introduced: 6.0, deprecated: 9.0, message: "use NavigationLink(value:label:) inside a NavigationStack or NavigationSplitView")
    public init(isActive: Binding<Bool>, @ViewBuilder destination: () -> Destination, @ViewBuilder label: () -> Label)

    @available(iOS, introduced: 13.0, deprecated: 16.0, message: "use NavigationLink(value:label:) inside a List within a NavigationStack or NavigationSplitView")
    @available(macOS, introduced: 10.15, deprecated: 13.0, message: "use NavigationLink(value:label:) inside a List within a NavigationStack or NavigationSplitView")
    @available(tvOS, introduced: 13.0, deprecated: 16.0, message: "use NavigationLink(value:label:) inside a List within a NavigationStack or NavigationSplitView")
    @available(watchOS, introduced: 6.0, deprecated: 9.0, message: "use NavigationLink(value:label:) inside a List within a NavigationStack or NavigationSplitView")
    public init<V>(tag: V, selection: Binding<V?>, @ViewBuilder destination: () -> Destination, @ViewBuilder label: () -> Label) where V : Hashable

    @MainActor public var body: some View { get }

    @available(iOS, introduced: 13.0, deprecated: 100000.0, message: "Pass a closure as the destination")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Pass a closure as the destination")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "Pass a closure as the destination")
    @available(watchOS, introduced: 6.0, deprecated: 100000.0, message: "Pass a closure as the destination")
    public init(destination: Destination, @ViewBuilder label: () -> Label)

    @available(iOS, introduced: 13.0, deprecated: 16.0, message: "use NavigationLink(value:label:) inside a NavigationStack or NavigationSplitView")
    @available(macOS, introduced: 10.15, deprecated: 13.0, message: "use NavigationLink(value:label:) inside a NavigationStack or NavigationSplitView")
    @available(tvOS, introduced: 13.0, deprecated: 16.0, message: "use NavigationLink(value:label:) inside a NavigationStack or NavigationSplitView")
    @available(watchOS, introduced: 6.0, deprecated: 9.0, message: "use NavigationLink(value:label:) inside a NavigationStack or NavigationSplitView")
    public init(destination: Destination, isActive: Binding<Bool>, @ViewBuilder label: () -> Label)

    @available(iOS, introduced: 13.0, deprecated: 16.0, message: "use NavigationLink(value:label:) inside a List within a NavigationStack or NavigationSplitView")
    @available(macOS, introduced: 10.15, deprecated: 13.0, message: "use NavigationLink(value:label:) inside a List within a NavigationStack or NavigationSplitView")
    @available(tvOS, introduced: 13.0, deprecated: 16.0, message: "use NavigationLink(value:label:) inside a List within a NavigationStack or NavigationSplitView")
    @available(watchOS, introduced: 6.0, deprecated: 9.0, message: "use NavigationLink(value:label:) inside a List within a NavigationStack or NavigationSplitView")
    public init<V>(destination: Destination, tag: V, selection: Binding<V?>, @ViewBuilder label: () -> Label) where V : Hashable

    public typealias Body = some View
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension NavigationLink where Label == Text {

    public init(_ titleKey: LocalizedStringKey, @ViewBuilder destination: () -> Destination)

    public init<S>(_ title: S, @ViewBuilder destination: () -> Destination) where S : StringProtocol

    @available(iOS, introduced: 13.0, deprecated: 16.0, message: "use NavigationLink(_:value:) inside a NavigationStack or NavigationSplitView")
    @available(macOS, introduced: 10.15, deprecated: 13.0, message: "use NavigationLink(_:value:) inside a NavigationStack or NavigationSplitView")
    @available(tvOS, introduced: 13.0, deprecated: 16.0, message: "use NavigationLink(_:value:) inside a NavigationStack or NavigationSplitView")
    @available(watchOS, introduced: 6.0, deprecated: 9.0, message: "use NavigationLink(_:value:) inside a NavigationStack or NavigationSplitView")
    public init(_ titleKey: LocalizedStringKey, isActive: Binding<Bool>, @ViewBuilder destination: () -> Destination)

    @available(iOS, introduced: 13.0, deprecated: 16.0, message: "use NavigationLink(_:value:) inside a NavigationStack or NavigationSplitView")
    @available(macOS, introduced: 10.15, deprecated: 13.0, message: "use NavigationLink(_:value:) inside a NavigationStack or NavigationSplitView")
    @available(tvOS, introduced: 13.0, deprecated: 16.0, message: "use NavigationLink(_:value:) inside a NavigationStack or NavigationSplitView")
    @available(watchOS, introduced: 6.0, deprecated: 9.0, message: "use NavigationLink(_:value:) inside a NavigationStack or NavigationSplitView")
    public init<S>(_ title: S, isActive: Binding<Bool>, @ViewBuilder destination: () -> Destination) where S : StringProtocol

    @available(iOS, introduced: 13.0, deprecated: 16.0, message: "use NavigationLink(_:value:) inside a List within a NavigationStack or NavigationSplitView")
    @available(macOS, introduced: 10.15, deprecated: 13.0, message: "use NavigationLink(_:value:) inside a List within a NavigationStack or NavigationSplitView")
    @available(tvOS, introduced: 13.0, deprecated: 16.0, message: "use NavigationLink(_:value:) inside a List within a NavigationStack or NavigationSplitView")
    @available(watchOS, introduced: 6.0, deprecated: 9.0, message: "use NavigationLink(_:value:) inside a List within a NavigationStack or NavigationSplitView")
    public init<V>(_ titleKey: LocalizedStringKey, tag: V, selection: Binding<V?>, @ViewBuilder destination: () -> Destination) where V : Hashable

    @available(iOS, introduced: 13.0, deprecated: 16.0, message: "use NavigationLink(_:value:) inside a List within a NavigationStack or NavigationSplitView")
    @available(macOS, introduced: 10.15, deprecated: 13.0, message: "use NavigationLink(_:value:) inside a List within a NavigationStack or NavigationSplitView")
    @available(tvOS, introduced: 13.0, deprecated: 16.0, message: "use NavigationLink(_:value:) inside a List within a NavigationStack or NavigationSplitView")
    @available(watchOS, introduced: 6.0, deprecated: 9.0, message: "use NavigationLink(_:value:) inside a List within a NavigationStack or NavigationSplitView")
    public init<S, V>(_ title: S, tag: V, selection: Binding<V?>, @ViewBuilder destination: () -> Destination) where S : StringProtocol, V : Hashable

    @available(iOS, introduced: 13.0, deprecated: 100000.0, message: "Pass a closure as the destination")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Pass a closure as the destination")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "Pass a closure as the destination")
    @available(watchOS, introduced: 6.0, deprecated: 100000.0, message: "Pass a closure as the destination")
    public init(_ titleKey: LocalizedStringKey, destination: Destination)

    @available(iOS, introduced: 13.0, deprecated: 100000.0, message: "Pass a closure as the destination")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Pass a closure as the destination")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "Pass a closure as the destination")
    @available(watchOS, introduced: 6.0, deprecated: 100000.0, message: "Pass a closure as the destination")
    public init<S>(_ title: S, destination: Destination) where S : StringProtocol

    @available(iOS, introduced: 13.0, deprecated: 16.0, message: "use NavigationLink(_:value:) inside a NavigationStack or NavigationSplitView")
    @available(macOS, introduced: 10.15, deprecated: 13.0, message: "use NavigationLink(_:value:) inside a NavigationStack or NavigationSplitView")
    @available(tvOS, introduced: 13.0, deprecated: 16.0, message: "use NavigationLink(_:value:) inside a NavigationStack or NavigationSplitView")
    @available(watchOS, introduced: 6.0, deprecated: 9.0, message: "use NavigationLink(_:value:) inside a NavigationStack or NavigationSplitView")
    public init(_ titleKey: LocalizedStringKey, destination: Destination, isActive: Binding<Bool>)

    @available(iOS, introduced: 13.0, deprecated: 16.0, message: "use NavigationLink(_:value:) inside a NavigationStack or NavigationSplitView")
    @available(macOS, introduced: 10.15, deprecated: 13.0, message: "use NavigationLink(_:value:) inside a NavigationStack or NavigationSplitView")
    @available(tvOS, introduced: 13.0, deprecated: 16.0, message: "use NavigationLink(_:value:) inside a NavigationStack or NavigationSplitView")
    @available(watchOS, introduced: 6.0, deprecated: 9.0, message: "use NavigationLink(_:value:) inside a NavigationStack or NavigationSplitView")
    public init<S>(_ title: S, destination: Destination, isActive: Binding<Bool>) where S : StringProtocol

    @available(iOS, introduced: 13.0, deprecated: 16.0, message: "use NavigationLink(_:value:) inside a List within a NavigationStack or NavigationSplitView")
    @available(macOS, introduced: 10.15, deprecated: 13.0, message: "use NavigationLink(_:value:) inside a List within a NavigationStack or NavigationSplitView")
    @available(tvOS, introduced: 13.0, deprecated: 16.0, message: "use NavigationLink(_:value:) inside a List within a NavigationStack or NavigationSplitView")
    @available(watchOS, introduced: 6.0, deprecated: 9.0, message: "use NavigationLink(_:value:) inside a List within a NavigationStack or NavigationSplitView")
    public init<V>(_ titleKey: LocalizedStringKey, destination: Destination, tag: V, selection: Binding<V?>) where V : Hashable

    @available(iOS, introduced: 13.0, deprecated: 16.0, message: "use NavigationLink(_:value:) inside a List within a NavigationStack or NavigationSplitView")
    @available(macOS, introduced: 10.15, deprecated: 13.0, message: "use NavigationLink(_:value:) inside a List within a NavigationStack or NavigationSplitView")
    @available(tvOS, introduced: 13.0, deprecated: 16.0, message: "use NavigationLink(_:value:) inside a List within a NavigationStack or NavigationSplitView")
    @available(watchOS, introduced: 6.0, deprecated: 9.0, message: "use NavigationLink(_:value:) inside a List within a NavigationStack or NavigationSplitView")
    public init<S, V>(_ title: S, destination: Destination, tag: V, selection: Binding<V?>) where S : StringProtocol, V : Hashable
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension NavigationLink where Destination == Never {

    public init<P>(value: P?, @ViewBuilder label: () -> Label) where P : Hashable

    public init<P>(_ titleKey: LocalizedStringKey, value: P?) where Label == Text, P : Hashable

    public init<S, P>(_ title: S, value: P?) where Label == Text, S : StringProtocol, P : Hashable

    public init<P>(value: P?, @ViewBuilder label: () -> Label) where P : Decodable, P : Encodable, P : Hashable

    public init<P>(_ titleKey: LocalizedStringKey, value: P?) where Label == Text, P : Decodable, P : Encodable, P : Hashable

    public init<S, P>(_ title: S, value: P?) where Label == Text, S : StringProtocol, P : Decodable, P : Encodable, P : Hashable
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public struct NavigationPath {

    public var count: Int { get }

    public var isEmpty: Bool { get }

    public var codable: NavigationPath.CodableRepresentation? { get }

    public init()

    public init<S>(_ elements: S) where S : Sequence, S.Element : Hashable

    public init<S>(_ elements: S) where S : Sequence, S.Element : Decodable, S.Element : Encodable, S.Element : Hashable

    public init(_ codable: NavigationPath.CodableRepresentation)

    public mutating func append<V>(_ value: V) where V : Hashable

    public mutating func append<V>(_ value: V) where V : Decodable, V : Encodable, V : Hashable

    public mutating func removeLast(_ k: Int = 1)

    public struct CodableRepresentation : Codable {

                                public init(from decoder: Decoder) throws

                                            public func encode(to encoder: Encoder) throws
    }
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension NavigationPath : Equatable {

    public static func == (lhs: NavigationPath, rhs: NavigationPath) -> Bool
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension NavigationPath.CodableRepresentation : Equatable {

    public static func == (lhs: NavigationPath.CodableRepresentation, rhs: NavigationPath.CodableRepresentation) -> Bool
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
@MainActor public struct NavigationSplitView<Sidebar, Content, Detail> : View where Sidebar : View, Content : View, Detail : View {

    @MainActor public init(@ViewBuilder sidebar: () -> Sidebar, @ViewBuilder content: () -> Content, @ViewBuilder detail: () -> Detail)

    @MainActor public init(columnVisibility: Binding<NavigationSplitViewVisibility>, @ViewBuilder sidebar: () -> Sidebar, @ViewBuilder content: () -> Content, @ViewBuilder detail: () -> Detail)

    @MainActor public init(@ViewBuilder sidebar: () -> Sidebar, @ViewBuilder detail: () -> Detail) where Content == EmptyView

    @MainActor public init(columnVisibility: Binding<NavigationSplitViewVisibility>, @ViewBuilder sidebar: () -> Sidebar, @ViewBuilder detail: () -> Detail) where Content == EmptyView

    @MainActor public var body: some View { get }

    public typealias Body = some View
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public protocol NavigationSplitViewStyle {

    associatedtype Body : View

    @ViewBuilder func makeBody(configuration: Self.Configuration) -> Self.Body

    typealias Configuration = NavigationSplitViewStyleConfiguration
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension NavigationSplitViewStyle where Self == ProminentDetailNavigationSplitViewStyle {

    public static var prominentDetail: ProminentDetailNavigationSplitViewStyle { get }
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension NavigationSplitViewStyle where Self == AutomaticNavigationSplitViewStyle {

    public static var automatic: AutomaticNavigationSplitViewStyle { get }
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension NavigationSplitViewStyle where Self == BalancedNavigationSplitViewStyle {

    public static var balanced: BalancedNavigationSplitViewStyle { get }
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public struct NavigationSplitViewStyleConfiguration {
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public struct NavigationSplitViewVisibility : Equatable, Codable {

    public static var detailOnly: NavigationSplitViewVisibility { get }

    public static var doubleColumn: NavigationSplitViewVisibility { get }

    public static var all: NavigationSplitViewVisibility { get }

    public static var automatic: NavigationSplitViewVisibility { get }

    public static func == (a: NavigationSplitViewVisibility, b: NavigationSplitViewVisibility) -> Bool

    public func encode(to encoder: Encoder) throws

    public init(from decoder: Decoder) throws
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
@MainActor public struct NavigationStack<Data, Root> : View where Root : View {

    @MainActor public init(@ViewBuilder root: () -> Root) where Data == NavigationPath

    @MainActor public init(path: Binding<NavigationPath>, @ViewBuilder root: () -> Root) where Data == NavigationPath

    @MainActor public init(path: Binding<Data>, @ViewBuilder root: () -> Root) where Data : MutableCollection, Data : RandomAccessCollection, Data : RangeReplaceableCollection, Data.Element : Hashable

    @MainActor public var body: some View { get }

    public typealias Body = some View
}

@available(iOS, introduced: 13.0, deprecated: 100000.0, message: "use NavigationStack or NavigationSplitView instead")
@available(macOS, introduced: 10.15, deprecated: 100000.0, message: "use NavigationStack or NavigationSplitView instead")
@available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "use NavigationStack or NavigationSplitView instead")
@available(watchOS, introduced: 7.0, deprecated: 100000.0, message: "use NavigationStack or NavigationSplitView instead")
public struct NavigationView<Content> : View where Content : View {

    public init(@ViewBuilder content: () -> Content)

    public typealias Body = Never
}

@available(iOS, introduced: 13.0, deprecated: 100000.0, message: "replace styled NavigationView with NavigationStack or NavigationSplitView instead")
@available(macOS, introduced: 10.15, deprecated: 100000.0, message: "replace styled NavigationView with NavigationStack or NavigationSplitView instead")
@available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "replace styled NavigationView with NavigationStack or NavigationSplitView instead")
@available(watchOS, introduced: 7.0, deprecated: 100000.0, message: "replace styled NavigationView with NavigationStack or NavigationSplitView instead")
public protocol NavigationViewStyle {
}

@available(iOS, introduced: 13.0, deprecated: 100000.0, message: "replace styled NavigationView with NavigationStack or NavigationSplitView instead")
@available(macOS, introduced: 10.15, deprecated: 100000.0, message: "replace styled NavigationView with NavigationSplitView instead")
@available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "replace styled NavigationView with NavigationStack or NavigationSplitView instead")
@available(watchOS, introduced: 7.0, deprecated: 100000.0, message: "replace styled NavigationView with NavigationStack or NavigationSplitView instead")
extension NavigationViewStyle where Self == DefaultNavigationViewStyle {

    public static var automatic: DefaultNavigationViewStyle { get }
}

@available(iOS, introduced: 15.0, deprecated: 100000.0, message: "replace styled NavigationView with NavigationSplitView")
@available(macOS, introduced: 12.0, deprecated: 100000.0, message: "replace styled NavigationView with NavigationSplitView")
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension NavigationViewStyle where Self == ColumnNavigationViewStyle {

    public static var columns: ColumnNavigationViewStyle { get }
}

@available(macOS 13.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct NewDocumentAction {

    public func callAsFunction<D>(_ newDocument: @autoclosure @escaping () -> D) where D : FileDocument

    public func callAsFunction<D>(_ newDocument: @escaping () -> D) where D : ReferenceFileDocument
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@propertyWrapper @frozen public struct ObservedObject<ObjectType> : DynamicProperty where ObjectType : ObservableObject {

    @dynamicMemberLookup @frozen public struct Wrapper {

                            public subscript<Subject>(dynamicMember keyPath: ReferenceWritableKeyPath<ObjectType, Subject>) -> Binding<Subject> { get }
    }

    public init(initialValue: ObjectType)

    public init(wrappedValue: ObjectType)

    @MainActor public var wrappedValue: ObjectType

    @MainActor public var projectedValue: ObservedObject<ObjectType>.Wrapper { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct OffsetShape<Content> : Shape where Content : Shape {

    public var shape: Content

    public var offset: CGSize

    @inlinable public init(shape: Content, offset: CGSize)

    public func path(in rect: CGRect) -> Path

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public static var role: ShapeRole { get }

    public typealias AnimatableData = AnimatablePair<Content.AnimatableData, CGSize.AnimatableData>

    public var animatableData: OffsetShape<Content>.AnimatableData

    public typealias Body
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension OffsetShape : InsettableShape where Content : InsettableShape {

    @inlinable public func inset(by amount: CGFloat) -> OffsetShape<Content.InsetShape>

    public typealias InsetShape = OffsetShape<Content.InsetShape>
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct OnInsertTableRowModifier {

    public var body: some _TableRowContentModifier { get }

    public typealias Body = some _TableRowContentModifier
}

@available(macOS 13.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct OpenDocumentAction {

    public func callAsFunction(at url: URL) async throws
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public struct OpenURLAction {

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public struct Result {

                        public static let handled: OpenURLAction.Result

                        public static let discarded: OpenURLAction.Result

                        public static let systemAction: OpenURLAction.Result

                                public static func systemAction(_ url: URL) -> OpenURLAction.Result
    }

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public init(handler: @escaping (URL) -> OpenURLAction.Result)

    public func callAsFunction(_ url: URL)

    @available(watchOS, unavailable)
    public func callAsFunction(_ url: URL, completion: @escaping (_ accepted: Bool) -> Void)
}

@available(macOS 13.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct OpenWindowAction {

    public func callAsFunction<D>(value: D) where D : Decodable, D : Encodable, D : Hashable

    public func callAsFunction(id: String)

    public func callAsFunction<D>(id: String, value: D) where D : Decodable, D : Encodable, D : Hashable
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct OutlineGroup<Data, ID, Parent, Leaf, Subgroup> where Data : RandomAccessCollection, ID : Hashable {
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension OutlineGroup where ID == Data.Element.ID, Parent : View, Parent == Leaf, Subgroup == DisclosureGroup<Parent, OutlineSubgroupChildren>, Data.Element : Identifiable {

    public init<DataElement>(_ root: DataElement, children: KeyPath<DataElement, Data?>, @ViewBuilder content: @escaping (DataElement) -> Leaf) where ID == DataElement.ID, DataElement : Identifiable, DataElement == Data.Element

    public init<DataElement>(_ data: Data, children: KeyPath<DataElement, Data?>, @ViewBuilder content: @escaping (DataElement) -> Leaf) where ID == DataElement.ID, DataElement : Identifiable, DataElement == Data.Element
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension OutlineGroup where Parent : View, Parent == Leaf, Subgroup == DisclosureGroup<Parent, OutlineSubgroupChildren> {

    public init<DataElement>(_ root: DataElement, id: KeyPath<DataElement, ID>, children: KeyPath<DataElement, Data?>, @ViewBuilder content: @escaping (DataElement) -> Leaf) where DataElement == Data.Element

    public init<DataElement>(_ data: Data, id: KeyPath<DataElement, ID>, children: KeyPath<DataElement, Data?>, @ViewBuilder content: @escaping (DataElement) -> Leaf) where DataElement == Data.Element
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension OutlineGroup : View where Parent : View, Leaf : View, Subgroup : View {

    @MainActor public var body: some View { get }

    public typealias Body = some View
}

@available(iOS 15.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension OutlineGroup where ID == Data.Element.ID, Parent : View, Parent == Leaf, Subgroup == DisclosureGroup<Parent, OutlineSubgroupChildren>, Data.Element : Identifiable {

    public init<C, E>(_ root: Binding<E>, children: WritableKeyPath<E, C?>, @ViewBuilder content: @escaping (Binding<E>) -> Leaf) where Data == Binding<C>, ID == E.ID, C : MutableCollection, C : RandomAccessCollection, E : Identifiable, E == C.Element

    public init<C, E>(_ data: Binding<C>, children: WritableKeyPath<E, C?>, @ViewBuilder content: @escaping (Binding<E>) -> Leaf) where Data == Binding<C>, ID == E.ID, C : MutableCollection, C : RandomAccessCollection, E : Identifiable, E == C.Element
}

@available(iOS 15.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension OutlineGroup where Parent : View, Parent == Leaf, Subgroup == DisclosureGroup<Parent, OutlineSubgroupChildren> {

    public init<C, E>(_ root: Binding<E>, id: KeyPath<E, ID>, children: WritableKeyPath<E, C?>, @ViewBuilder content: @escaping (Binding<E>) -> Leaf) where Data == Binding<C>, C : MutableCollection, C : RandomAccessCollection, E == C.Element

    public init<C, E>(_ data: Binding<C>, id: KeyPath<E, ID>, children: WritableKeyPath<E, C?>, @ViewBuilder content: @escaping (Binding<E>) -> Leaf) where Data == Binding<C>, C : MutableCollection, C : RandomAccessCollection, E == C.Element
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct OutlineSubgroupChildren : View {

    public typealias Body = Never
}

@available(iOS 16.0, macOS 10.15, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct PasteButton : View {

    @available(iOS 16.0, macOS 11.0, *)
    public init(supportedContentTypes: [UTType], payloadAction: @escaping ([NSItemProvider]) -> Void)

    @available(iOS, unavailable)
    @available(macOS, introduced: 11.0, deprecated: 100000.0)
    public init<Payload>(supportedContentTypes: [UTType], validator: @escaping ([NSItemProvider]) -> Payload?, payloadAction: @escaping (Payload) -> Void)

    @available(iOS 16.0, macOS 13.0, *)
    public init<T>(payloadType: T.Type, onPaste: @escaping ([T]) -> Void) where T : Transferable

    @MainActor public var body: some View { get }

    public typealias Body = some View
}

@available(iOS, unavailable)
@available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Provide `UTType`s as the `supportedContentTypes` instead.")
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension PasteButton {

    public init(supportedTypes: [String], payloadAction: @escaping ([NSItemProvider]) -> Void)

    public init<Payload>(supportedTypes: [String], validator: @escaping ([NSItemProvider]) -> Payload?, payloadAction: @escaping (Payload) -> Void)
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct Path : Equatable, LosslessStringConvertible {

    public init()

    public init(_ path: CGPath)

    public init(_ path: CGMutablePath)

    public init(_ rect: CGRect)

    public init(roundedRect rect: CGRect, cornerSize: CGSize, style: RoundedCornerStyle = .circular)

    public init(roundedRect rect: CGRect, cornerRadius: CGFloat, style: RoundedCornerStyle = .circular)

    public init(ellipseIn rect: CGRect)

    public init(_ callback: (inout Path) -> ())

    public init?(_ string: String)

    public var description: String { get }

    public var cgPath: CGPath { get }

    public var isEmpty: Bool { get }

    public var boundingRect: CGRect { get }

    public func contains(_ p: CGPoint, eoFill: Bool = false) -> Bool

    @frozen public enum Element : Equatable {

                case move(to: CGPoint)

                case line(to: CGPoint)

                        case quadCurve(to: CGPoint, control: CGPoint)

                        case curve(to: CGPoint, control1: CGPoint, control2: CGPoint)

                        case closeSubpath

                                        public static func == (a: Path.Element, b: Path.Element) -> Bool
    }

    public func forEach(_ body: (Path.Element) -> Void)

    public func strokedPath(_ style: StrokeStyle) -> Path

    public func trimmedPath(from: CGFloat, to: CGFloat) -> Path

    public static func == (a: Path, b: Path) -> Bool
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Path : Shape {

    public func path(in _: CGRect) -> Path

    public typealias AnimatableData = EmptyAnimatableData

    public typealias Body
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Path {

    public mutating func move(to p: CGPoint)

    public mutating func addLine(to p: CGPoint)

    public mutating func addQuadCurve(to p: CGPoint, control cp: CGPoint)

    public mutating func addCurve(to p: CGPoint, control1 cp1: CGPoint, control2 cp2: CGPoint)

    public mutating func closeSubpath()

    public mutating func addRect(_ rect: CGRect, transform: CGAffineTransform = .identity)

    public mutating func addRoundedRect(in rect: CGRect, cornerSize: CGSize, style: RoundedCornerStyle = .circular, transform: CGAffineTransform = .identity)

    public mutating func addEllipse(in rect: CGRect, transform: CGAffineTransform = .identity)

    public mutating func addRects(_ rects: [CGRect], transform: CGAffineTransform = .identity)

    public mutating func addLines(_ lines: [CGPoint])

    public mutating func addRelativeArc(center: CGPoint, radius: CGFloat, startAngle: Angle, delta: Angle, transform: CGAffineTransform = .identity)

    public mutating func addArc(center: CGPoint, radius: CGFloat, startAngle: Angle, endAngle: Angle, clockwise: Bool, transform: CGAffineTransform = .identity)

    public mutating func addArc(tangent1End p1: CGPoint, tangent2End p2: CGPoint, radius: CGFloat, transform: CGAffineTransform = .identity)

    public mutating func addPath(_ path: Path, transform: CGAffineTransform = .identity)

    public var currentPoint: CGPoint? { get }

    public func applying(_ transform: CGAffineTransform) -> Path

    public func offsetBy(dx: CGFloat, dy: CGFloat) -> Path
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Path.Element : Sendable {
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
public struct PeriodicTimelineSchedule : TimelineSchedule {

    public struct Entries : Sequence, IteratorProtocol {

                                                                                                                    public mutating func next() -> Date?

            public typealias Element = Date

                public typealias Iterator = PeriodicTimelineSchedule.Entries
    }

    public init(from startDate: Date, by interval: TimeInterval)

    public func entries(from startDate: Date, mode: TimelineScheduleMode) -> PeriodicTimelineSchedule.Entries
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public struct Picker<Label, SelectionValue, Content> : View where Label : View, SelectionValue : Hashable, Content : View {

    @MainActor public var body: some View { get }

    public typealias Body = some View
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Picker {

    @available(iOS, introduced: 13.0, deprecated: 100000.0, message: "Use PickerBuilder based Picker initalizers instead")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Use PickerBuilder based Picker initalizers instead")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "Use PickerBuilder based Picker initalizers instead")
    @available(watchOS, introduced: 6.0, deprecated: 100000.0, message: "Use PickerBuilder based Picker initalizers instead")
    public init(selection: Binding<SelectionValue>, @ViewBuilder content: () -> Content, @ViewBuilder label: () -> Label)
}

@available(iOS, introduced: 13.0, deprecated: 100000.0, message: "Use PickerBuilder based Picker initalizers instead")
@available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Use PickerBuilder based Picker initalizers instead")
@available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "Use PickerBuilder based Picker initalizers instead")
@available(watchOS, introduced: 6.0, deprecated: 100000.0, message: "Use PickerBuilder based Picker initalizers instead")
extension Picker where Label == Text {

    public init(_ titleKey: LocalizedStringKey, selection: Binding<SelectionValue>, @ViewBuilder content: () -> Content)

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public init<C>(_ titleKey: LocalizedStringKey, selection: C, @ViewBuilder content: () -> Content) where C : Collection, C.Element == Binding<SelectionValue>

    public init<S>(_ title: S, selection: Binding<SelectionValue>, @ViewBuilder content: () -> Content) where S : StringProtocol

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public init<C, S>(_ title: S, selection: C, @ViewBuilder content: () -> Content) where C : RandomAccessCollection, S : StringProtocol, C.Element == Binding<SelectionValue>
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Picker {

    @available(iOS, deprecated: 100000.0, renamed: "Picker(selection:content:label:)")
    @available(macOS, deprecated: 100000.0, renamed: "Picker(selection:content:label:)")
    @available(tvOS, deprecated: 100000.0, renamed: "Picker(selection:content:label:)")
    @available(watchOS, deprecated: 100000.0, renamed: "Picker(selection:content:label:)")
    public init(selection: Binding<SelectionValue>, label: Label, @ViewBuilder content: () -> Content)
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public protocol PickerStyle {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, *)
@available(watchOS, unavailable)
extension PickerStyle where Self == SegmentedPickerStyle {

    public static var segmented: SegmentedPickerStyle { get }
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension PickerStyle where Self == MenuPickerStyle {

    public static var menu: MenuPickerStyle { get }
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension PickerStyle where Self == InlinePickerStyle {

    public static var inline: InlinePickerStyle { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension PickerStyle where Self == DefaultPickerStyle {

    public static var automatic: DefaultPickerStyle { get }
}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension PickerStyle where Self == RadioGroupPickerStyle {

    public static var radioGroup: RadioGroupPickerStyle { get }
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public struct PinnedScrollableViews : OptionSet {

    public let rawValue: UInt32

    public init(rawValue: UInt32)

    public static let sectionHeaders: PinnedScrollableViews

    public static let sectionFooters: PinnedScrollableViews

    public typealias ArrayLiteralElement = PinnedScrollableViews

    public typealias Element = PinnedScrollableViews

    public typealias RawValue = UInt32
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public struct PlainButtonStyle : PrimitiveButtonStyle {

    public init()

    public func makeBody(configuration: PlainButtonStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public struct PlainListStyle : ListStyle {

    public init()
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public struct PlainTextFieldStyle : TextFieldStyle {

    public init()
}

@available(iOS, unavailable)
@available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Use the `menu` style instead.")
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct PopUpButtonPickerStyle : PickerStyle {

    public init()
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public enum PopoverAttachmentAnchor {

    case rect(Anchor<CGRect>.Source)

    case point(UnitPoint)
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public protocol PreferenceKey {

    associatedtype Value

    static var defaultValue: Self.Value { get }

    static func reduce(value: inout Self.Value, nextValue: () -> Self.Value)
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension PreferenceKey where Self.Value : ExpressibleByNilLiteral {

    public static var defaultValue: Self.Value { get }
}

@available(iOS 13.0, macOS 11.0, tvOS 13.0, watchOS 6.0, *)
public struct PreferredColorSchemeKey : PreferenceKey {

    public typealias Value = ColorScheme?

    public static func reduce(value: inout PreferredColorSchemeKey.Value, nextValue: () -> PreferredColorSchemeKey.Value)
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public struct PresentationDetent : Hashable {

    public static let medium: PresentationDetent

    public static let large: PresentationDetent

    public static func fraction(_ fraction: CGFloat) -> PresentationDetent

    public static func height(_ height: CGFloat) -> PresentationDetent

    public static func custom<D>(_ type: D.Type) -> PresentationDetent where D : CustomPresentationDetent

    @dynamicMemberLookup public struct Context {

            public var maxDetentValue: CGFloat { get }

                        public subscript<T>(dynamicMember keyPath: KeyPath<EnvironmentValues, T>) -> T { get }
    }

    public func hash(into hasher: inout Hasher)

    public static func == (a: PresentationDetent, b: PresentationDetent) -> Bool

    public var hashValue: Int { get }
}

@available(iOS, introduced: 13.0, deprecated: 100000.0, message: "Use EnvironmentValues.isPresented or EnvironmentValues.dismiss")
@available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Use EnvironmentValues.isPresented or EnvironmentValues.dismiss")
@available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "Use EnvironmentValues.isPresented or EnvironmentValues.dismiss")
@available(watchOS, introduced: 6.0, deprecated: 100000.0, message: "Use EnvironmentValues.isPresented or EnvironmentValues.dismiss")
public struct PresentationMode {

    public var isPresented: Bool { get }

    public mutating func dismiss()
}

@available(macOS 13.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct PresentedWindowContent<Data, Content> : View where Data : Decodable, Data : Encodable, Data : Hashable, Content : View {

    public typealias Body = Never
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public protocol PreviewContext {

    subscript<Key>(key: Key.Type) -> Key.Value where Key : PreviewContextKey { get }
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public protocol PreviewContextKey {

    associatedtype Value

    static var defaultValue: Self.Value { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public struct PreviewDevice : RawRepresentable, ExpressibleByStringLiteral {

    public let rawValue: String

    public init(rawValue: String)

    public init(stringLiteral: String)

    public typealias ExtendedGraphemeClusterLiteralType = String

    public typealias RawValue = String

    public typealias StringLiteralType = String

    public typealias UnicodeScalarLiteralType = String
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public enum PreviewLayout {

    case device

    case sizeThatFits

    case fixed(width: CGFloat, height: CGFloat)
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public enum PreviewPlatform {

    case iOS

    case macOS

    case tvOS

    case watchOS

    public static func == (a: PreviewPlatform, b: PreviewPlatform) -> Bool

    public func hash(into hasher: inout Hasher)

    public var hashValue: Int { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension PreviewPlatform : Equatable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension PreviewPlatform : Hashable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@MainActor public protocol PreviewProvider : _PreviewProvider {

    associatedtype Previews : View

    @ViewBuilder @MainActor static var previews: Self.Previews { get }

    @MainActor static var platform: PreviewPlatform? { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension PreviewProvider {

    @MainActor public static var platform: PreviewPlatform? { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public protocol PrimitiveButtonStyle {

    associatedtype Body : View

    @ViewBuilder func makeBody(configuration: Self.Configuration) -> Self.Body

    typealias Configuration = PrimitiveButtonStyleConfiguration
}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension PrimitiveButtonStyle where Self == LinkButtonStyle {

    public static var link: LinkButtonStyle { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension PrimitiveButtonStyle where Self == DefaultButtonStyle {

    public static var automatic: DefaultButtonStyle { get }
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension PrimitiveButtonStyle where Self == BorderedProminentButtonStyle {

    public static var borderedProminent: BorderedProminentButtonStyle { get }
}

@available(iOS 15.0, macOS 10.15, tvOS 13.0, watchOS 7.0, *)
extension PrimitiveButtonStyle where Self == BorderedButtonStyle {

    public static var bordered: BorderedButtonStyle { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension PrimitiveButtonStyle where Self == PlainButtonStyle {

    public static var plain: PlainButtonStyle { get }
}

@available(iOS 13.0, macOS 10.15, watchOS 8.0, *)
@available(tvOS, unavailable)
extension PrimitiveButtonStyle where Self == BorderlessButtonStyle {

    public static var borderless: BorderlessButtonStyle { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public struct PrimitiveButtonStyleConfiguration {

    public struct Label : View {

                        public typealias Body = Never
    }

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public let role: ButtonRole?

    public let label: PrimitiveButtonStyleConfiguration.Label

    public func trigger()
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public struct ProgressView<Label, CurrentValueLabel> : View where Label : View, CurrentValueLabel : View {

    @MainActor public var body: some View { get }

    public typealias Body = some View
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension ProgressView {

    public init(interval: ClosedRange<Date>, countdown: Bool = true, @ViewBuilder label: () -> Label, @ViewBuilder currentValueLabel: () -> CurrentValueLabel)
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension ProgressView where CurrentValueLabel == DefaultDateProgressLabel {

    public init(interval: ClosedRange<Date>, countdown: Bool = true, @ViewBuilder label: () -> Label)
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension ProgressView where Label == EmptyView, CurrentValueLabel == DefaultDateProgressLabel {

    public init(interval: ClosedRange<Date>, countdown: Bool = true)
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ProgressView where CurrentValueLabel == EmptyView {

    public init() where Label == EmptyView

    public init(@ViewBuilder label: () -> Label)

    public init(_ titleKey: LocalizedStringKey) where Label == Text

    public init<S>(_ title: S) where Label == Text, S : StringProtocol
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ProgressView {

    public init<V>(value: V?, total: V = 1.0) where Label == EmptyView, CurrentValueLabel == EmptyView, V : BinaryFloatingPoint

    public init<V>(value: V?, total: V = 1.0, @ViewBuilder label: () -> Label) where CurrentValueLabel == EmptyView, V : BinaryFloatingPoint

    public init<V>(value: V?, total: V = 1.0, @ViewBuilder label: () -> Label, @ViewBuilder currentValueLabel: () -> CurrentValueLabel) where V : BinaryFloatingPoint

    public init<V>(_ titleKey: LocalizedStringKey, value: V?, total: V = 1.0) where Label == Text, CurrentValueLabel == EmptyView, V : BinaryFloatingPoint

    public init<S, V>(_ title: S, value: V?, total: V = 1.0) where Label == Text, CurrentValueLabel == EmptyView, S : StringProtocol, V : BinaryFloatingPoint
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ProgressView {

    public init(_ progress: Progress) where Label == EmptyView, CurrentValueLabel == EmptyView
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ProgressView {

    public init(_ configuration: ProgressViewStyleConfiguration) where Label == ProgressViewStyleConfiguration.Label, CurrentValueLabel == ProgressViewStyleConfiguration.CurrentValueLabel
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public protocol ProgressViewStyle {

    associatedtype Body : View

    @ViewBuilder func makeBody(configuration: Self.Configuration) -> Self.Body

    typealias Configuration = ProgressViewStyleConfiguration
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ProgressViewStyle where Self == DefaultProgressViewStyle {

    public static var automatic: DefaultProgressViewStyle { get }
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ProgressViewStyle where Self == LinearProgressViewStyle {

    public static var linear: LinearProgressViewStyle { get }
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ProgressViewStyle where Self == CircularProgressViewStyle {

    public static var circular: CircularProgressViewStyle { get }
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public struct ProgressViewStyleConfiguration {

    public struct Label : View {

                        public typealias Body = Never
    }

    public struct CurrentValueLabel : View {

                        public typealias Body = Never
    }

    public let fractionCompleted: Double?

    public var label: ProgressViewStyleConfiguration.Label?

    public var currentValueLabel: ProgressViewStyleConfiguration.CurrentValueLabel?
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct ProjectionTransform {

    public var m11: CGFloat

    public var m12: CGFloat

    public var m13: CGFloat

    public var m21: CGFloat

    public var m22: CGFloat

    public var m23: CGFloat

    public var m31: CGFloat

    public var m32: CGFloat

    public var m33: CGFloat

    @inlinable public init()

    @inlinable public init(_ m: CGAffineTransform)

    @inlinable public init(_ m: CATransform3D)

    @inlinable public var isIdentity: Bool { get }

    @inlinable public var isAffine: Bool { get }

    public mutating func invert() -> Bool

    public func inverted() -> ProjectionTransform
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ProjectionTransform : Equatable {

    public static func == (a: ProjectionTransform, b: ProjectionTransform) -> Bool
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ProjectionTransform {

    @inlinable public func concatenating(_ rhs: ProjectionTransform) -> ProjectionTransform
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ProjectionTransform : Sendable {
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
public enum Prominence {

    case standard

    case increased

    public static func == (a: Prominence, b: Prominence) -> Bool

    public func hash(into hasher: inout Hasher)

    public var hashValue: Int { get }
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension Prominence : Equatable {
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension Prominence : Hashable {
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public struct ProminentDetailNavigationSplitViewStyle : NavigationSplitViewStyle {

    public init()

    public func makeBody(configuration: ProminentDetailNavigationSplitViewStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
@frozen public struct ProposedViewSize : Equatable {

    public var width: CGFloat?

    public var height: CGFloat?

    public static let zero: ProposedViewSize

    public static let unspecified: ProposedViewSize

    public static let infinity: ProposedViewSize

    @inlinable public init(width: CGFloat?, height: CGFloat?)

    @inlinable public init(_ size: CGSize)

    @inlinable public func replacingUnspecifiedDimensions(by size: CGSize = CGSize(width: 10, height: 10)) -> CGSize

    public static func == (a: ProposedViewSize, b: ProposedViewSize) -> Bool
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension ProposedViewSize : Sendable {
}

@available(iOS, unavailable)
@available(macOS, deprecated, message: "Use MenuButton instead.")
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public typealias PullDownButton

@available(macOS 13.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct PullDownMenuBarExtraStyle : MenuBarExtraStyle {

    public init()
}

@available(iOS, unavailable)
@available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Use `BorderedButtonMenuStyle` instead.")
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct PullDownMenuButtonStyle : MenuButtonStyle {

    public init()
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct RadialGradient : ShapeStyle, View {

    public init(gradient: Gradient, center: UnitPoint, startRadius: CGFloat, endRadius: CGFloat)

    public init(colors: [Color], center: UnitPoint, startRadius: CGFloat, endRadius: CGFloat)

    public init(stops: [Gradient.Stop], center: UnitPoint, startRadius: CGFloat, endRadius: CGFloat)

    public typealias Body
}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct RadioGroupPickerStyle : PickerStyle {

    public init()
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct Rectangle : Shape {

    public func path(in rect: CGRect) -> Path

    @inlinable public init()

    public typealias AnimatableData = EmptyAnimatableData

    public typealias Body
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Rectangle : InsettableShape {

    @inlinable public func inset(by amount: CGFloat) -> some InsettableShape


    public typealias InsetShape = some InsettableShape
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Rectangle : Sendable {
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public struct RedactionReasons : OptionSet {

    public let rawValue: Int

    public init(rawValue: Int)

    public static let placeholder: RedactionReasons

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public static let privacy: RedactionReasons

    public typealias ArrayLiteralElement = RedactionReasons

    public typealias Element = RedactionReasons

    public typealias RawValue = Int
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public protocol ReferenceFileDocument : ObservableObject {

    associatedtype Snapshot

    static var readableContentTypes: [UTType] { get }

    static var writableContentTypes: [UTType] { get }

    init(configuration: Self.ReadConfiguration) throws

    typealias ReadConfiguration = FileDocumentReadConfiguration

    func snapshot(contentType: UTType) throws -> Self.Snapshot

    func fileWrapper(snapshot: Self.Snapshot, configuration: Self.WriteConfiguration) throws -> FileWrapper

    typealias WriteConfiguration = FileDocumentWriteConfiguration
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension ReferenceFileDocument {

    public static var writableContentTypes: [UTType] { get }
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
@MainActor public struct ReferenceFileDocumentConfiguration<Document> where Document : ReferenceFileDocument {

    @ObservedObject @MainActor public var document: Document

    @MainActor public var $document: ObservedObject<Document>.Wrapper { get }

    @MainActor public var fileURL: URL?

    @MainActor public var isEditable: Bool
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
public struct RefreshAction {

    public func callAsFunction() async
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public struct RenameAction {

    public func callAsFunction()
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public struct RenameButton<Label> : View where Label : View {

    public init() where Label == Label<Text, Image>

    @MainActor public var body: some View { get }

    public typealias Body = some View
}

@available(macOS 12.0, tvOS 14.0, watchOS 7.0, *)
@available(iOS, unavailable)
public struct ResetFocusAction {

    public func callAsFunction(in namespace: Namespace.ID)
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct RotatedShape<Content> : Shape where Content : Shape {

    public var shape: Content

    public var angle: Angle

    public var anchor: UnitPoint

    @inlinable public init(shape: Content, angle: Angle, anchor: UnitPoint = .center)

    public func path(in rect: CGRect) -> Path

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public static var role: ShapeRole { get }

    public typealias AnimatableData = AnimatablePair<Content.AnimatableData, AnimatablePair<Angle.AnimatableData, UnitPoint.AnimatableData>>

    public var animatableData: RotatedShape<Content>.AnimatableData

    public typealias Body
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension RotatedShape : InsettableShape where Content : InsettableShape {

    @inlinable public func inset(by amount: CGFloat) -> RotatedShape<Content.InsetShape>

    public typealias InsetShape = RotatedShape<Content.InsetShape>
}

@available(iOS 13.0, macOS 10.15, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct RotationGesture : Gesture {

    public var minimumAngleDelta: Angle

    public init(minimumAngleDelta: Angle = .degrees(1))

    public typealias Body = Never

    public typealias Value = Angle
}

@available(iOS 13.0, macOS 10.15, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct RoundedBorderTextFieldStyle : TextFieldStyle {

    public init()
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public enum RoundedCornerStyle {

    case circular

    case continuous

    public static func == (a: RoundedCornerStyle, b: RoundedCornerStyle) -> Bool

    public func hash(into hasher: inout Hasher)

    public var hashValue: Int { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension RoundedCornerStyle : Equatable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension RoundedCornerStyle : Hashable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct RoundedRectangle : Shape {

    public var cornerSize: CGSize

    public var style: RoundedCornerStyle

    @inlinable public init(cornerSize: CGSize, style: RoundedCornerStyle = .circular)

    @inlinable public init(cornerRadius: CGFloat, style: RoundedCornerStyle = .circular)

    public func path(in rect: CGRect) -> Path

    public var animatableData: CGSize.AnimatableData

    public typealias AnimatableData = CGSize.AnimatableData

    public typealias Body
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension RoundedRectangle : InsettableShape {

    @inlinable public func inset(by amount: CGFloat) -> some InsettableShape


    public typealias InsetShape = some InsettableShape
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
@frozen public struct SafeAreaRegions : OptionSet {

    public let rawValue: UInt

    @inlinable public init(rawValue: UInt)

    public static let container: SafeAreaRegions

    public static let keyboard: SafeAreaRegions

    public static let all: SafeAreaRegions

    public typealias ArrayLiteralElement = SafeAreaRegions

    public typealias Element = SafeAreaRegions

    public typealias RawValue = UInt
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension SafeAreaRegions : Sendable {
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
@propertyWrapper public struct ScaledMetric<Value> : DynamicProperty where Value : BinaryFloatingPoint {

    public init(wrappedValue: Value, relativeTo textStyle: Font.TextStyle)

    public init(wrappedValue: Value)

    public var wrappedValue: Value { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct ScaledShape<Content> : Shape where Content : Shape {

    public var shape: Content

    public var scale: CGSize

    public var anchor: UnitPoint

    @inlinable public init(shape: Content, scale: CGSize, anchor: UnitPoint = .center)

    public func path(in rect: CGRect) -> Path

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public static var role: ShapeRole { get }

    public typealias AnimatableData = AnimatablePair<Content.AnimatableData, AnimatablePair<CGSize.AnimatableData, UnitPoint.AnimatableData>>

    public var animatableData: ScaledShape<Content>.AnimatableData

    public typealias Body
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public protocol Scene {

    associatedtype Body : Scene

    @SceneBuilder @MainActor var body: Self.Body { get }
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension Scene {

    public func defaultAppStorage(_ store: UserDefaults) -> some Scene

}

@available(macOS 13.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension Scene {

    public func windowResizability(_ resizability: WindowResizability) -> some Scene

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension Scene {

    @inlinable public func onChange<V>(of value: V, perform action: @escaping (_ newValue: V) -> Void) -> some Scene where V : Equatable

}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension Scene {

    public func handlesExternalEvents(matching conditions: Set<String>) -> some Scene

}

@available(macOS 13.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension Scene {

    public func defaultPosition(_ position: UnitPoint) -> some Scene


    public func defaultSize(_ size: CGSize) -> some Scene


    public func defaultSize(width: CGFloat, height: CGFloat) -> some Scene

}

@available(iOS 16.0, macOS 13.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension Scene {

    public func commandsRemoved() -> some Scene


    public func commandsReplaced<Content>(@CommandsBuilder content: () -> Content) -> some Scene where Content : Commands

}

@available(macOS 11.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension Scene {

    public func windowStyle<S>(_ style: S) -> some Scene where S : WindowStyle

}

@available(macOS 13.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension Scene {

    public func keyboardShortcut(_ key: KeyEquivalent, modifiers: EventModifiers = .command, localization: KeyboardShortcut.Localization = .automatic) -> some Scene


    public func keyboardShortcut(_ shortcut: KeyboardShortcut?) -> some Scene

}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension Scene {

    public func backgroundTask<D, R>(_ task: BackgroundTask<D, R>, action: @escaping @Sendable (D) async -> R) -> some Scene where D : Sendable, R : Sendable

}

@available(macOS 13.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension Scene {

    public func menuBarExtraStyle<S>(_ style: S) -> some Scene where S : MenuBarExtraStyle

}

@available(macOS 11.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension Scene {

    public func windowToolbarStyle<S>(_ style: S) -> some Scene where S : WindowToolbarStyle

}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension Scene {

    public func commands<Content>(@CommandsBuilder content: () -> Content) -> some Scene where Content : Commands

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
@resultBuilder public struct SceneBuilder {

    public static func buildBlock<Content>(_ content: Content) -> Content where Content : Scene
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension SceneBuilder {

    public static func buildBlock<C0, C1>(_ c0: C0, _ c1: C1) -> some Scene where C0 : Scene, C1 : Scene

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension SceneBuilder {

    public static func buildBlock<C0, C1, C2>(_ c0: C0, _ c1: C1, _ c2: C2) -> some Scene where C0 : Scene, C1 : Scene, C2 : Scene

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension SceneBuilder {

    public static func buildBlock<C0, C1, C2, C3>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3) -> some Scene where C0 : Scene, C1 : Scene, C2 : Scene, C3 : Scene

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension SceneBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4) -> some Scene where C0 : Scene, C1 : Scene, C2 : Scene, C3 : Scene, C4 : Scene

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension SceneBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5) -> some Scene where C0 : Scene, C1 : Scene, C2 : Scene, C3 : Scene, C4 : Scene, C5 : Scene

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension SceneBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6) -> some Scene where C0 : Scene, C1 : Scene, C2 : Scene, C3 : Scene, C4 : Scene, C5 : Scene, C6 : Scene

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension SceneBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6, C7>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6, _ c7: C7) -> some Scene where C0 : Scene, C1 : Scene, C2 : Scene, C3 : Scene, C4 : Scene, C5 : Scene, C6 : Scene, C7 : Scene

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension SceneBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6, C7, C8>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6, _ c7: C7, _ c8: C8) -> some Scene where C0 : Scene, C1 : Scene, C2 : Scene, C3 : Scene, C4 : Scene, C5 : Scene, C6 : Scene, C7 : Scene, C8 : Scene

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension SceneBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6, C7, C8, C9>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6, _ c7: C7, _ c8: C8, _ c9: C9) -> some Scene where C0 : Scene, C1 : Scene, C2 : Scene, C3 : Scene, C4 : Scene, C5 : Scene, C6 : Scene, C7 : Scene, C8 : Scene, C9 : Scene

}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public struct ScenePadding : Equatable {

    public static let minimum: ScenePadding

    public static func == (a: ScenePadding, b: ScenePadding) -> Bool
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public enum ScenePhase : Comparable {

    case background

    case inactive

    case active

    public static func == (a: ScenePhase, b: ScenePhase) -> Bool

    public func hash(into hasher: inout Hasher)

    public static func < (a: ScenePhase, b: ScenePhase) -> Bool

    public var hashValue: Int { get }
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ScenePhase : Hashable {
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
@frozen @propertyWrapper public struct SceneStorage<Value> : DynamicProperty {

    public var wrappedValue: Value { get nonmutating set }

    public var projectedValue: Binding<Value> { get }
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension SceneStorage {

    public init(wrappedValue: Value, _ key: String) where Value == Bool

    public init(wrappedValue: Value, _ key: String) where Value == Int

    public init(wrappedValue: Value, _ key: String) where Value == Double

    public init(wrappedValue: Value, _ key: String) where Value == String

    public init(wrappedValue: Value, _ key: String) where Value == URL

    public init(wrappedValue: Value, _ key: String) where Value == Data

    public init(wrappedValue: Value, _ key: String) where Value : RawRepresentable, Value.RawValue == Int

    public init(wrappedValue: Value, _ key: String) where Value : RawRepresentable, Value.RawValue == String
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension SceneStorage where Value : ExpressibleByNilLiteral {

    public init(_ key: String) where Value == Bool?

    public init(_ key: String) where Value == Int?

    public init(_ key: String) where Value == Double?

    public init(_ key: String) where Value == String?

    public init(_ key: String) where Value == URL?

    public init(_ key: String) where Value == Data?
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension SceneStorage {

    public init<R>(_ key: String) where Value == R?, R : RawRepresentable, R.RawValue == String

    public init<R>(_ key: String) where Value == R?, R : RawRepresentable, R.RawValue == Int
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public struct ScrollDismissesKeyboardMode {

    public static var automatic: ScrollDismissesKeyboardMode { get }

    public static var immediately: ScrollDismissesKeyboardMode { get }

    public static var interactively: ScrollDismissesKeyboardMode { get }

    public static var never: ScrollDismissesKeyboardMode { get }
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public struct ScrollIndicatorVisibility {

    public static var automatic: ScrollIndicatorVisibility { get }

    public static var visible: ScrollIndicatorVisibility { get }

    public static var hidden: ScrollIndicatorVisibility { get }

    public static var never: ScrollIndicatorVisibility { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public struct ScrollView<Content> : View where Content : View {

    public var content: Content

    public var axes: Axis.Set

    public var showsIndicators: Bool

    public init(_ axes: Axis.Set = .vertical, showsIndicators: Bool = true, @ViewBuilder content: () -> Content)

    @MainActor public var body: some View { get }

    public typealias Body = some View
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public struct ScrollViewProxy {

    public func scrollTo<ID>(_ id: ID, anchor: UnitPoint? = nil) where ID : Hashable
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
@frozen public struct ScrollViewReader<Content> : View where Content : View {

    public var content: (ScrollViewProxy) -> Content

    @inlinable public init(@ViewBuilder content: @escaping (ScrollViewProxy) -> Content)

    @MainActor public var body: some View { get }

    public typealias Body = some View
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
public struct SearchFieldPlacement {

    public static let automatic: SearchFieldPlacement

    @available(tvOS, unavailable)
    public static let toolbar: SearchFieldPlacement

    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public static let sidebar: SearchFieldPlacement
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public struct SearchSuggestionsPlacement : Equatable {

    public static var automatic: SearchSuggestionsPlacement { get }

    public static var menu: SearchSuggestionsPlacement { get }

    public static var content: SearchSuggestionsPlacement { get }

    public struct Set : OptionSet {

            public typealias Element = SearchSuggestionsPlacement.Set

            public var rawValue: Int

            public static var menu: SearchSuggestionsPlacement.Set { get }

                public static var content: SearchSuggestionsPlacement.Set { get }

            public init(rawValue: Int)

            public typealias ArrayLiteralElement = SearchSuggestionsPlacement.Set.Element

                                public typealias RawValue = Int
    }

    public static func == (a: SearchSuggestionsPlacement, b: SearchSuggestionsPlacement) -> Bool
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public struct Section<Parent, Content, Footer> {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Section : View where Parent : View, Content : View, Footer : View {

    public typealias Body = Never
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Section where Parent : View, Content : View, Footer : View {

    public init(@ViewBuilder content: () -> Content, @ViewBuilder header: () -> Parent, @ViewBuilder footer: () -> Footer)
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Section where Parent == EmptyView, Content : View, Footer : View {

    public init(@ViewBuilder content: () -> Content, @ViewBuilder footer: () -> Footer)
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Section where Parent : View, Content : View, Footer == EmptyView {

    public init(@ViewBuilder content: () -> Content, @ViewBuilder header: () -> Parent)
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Section where Parent == EmptyView, Content : View, Footer == EmptyView {

    public init(@ViewBuilder content: () -> Content)
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension Section where Parent == Text, Content : View, Footer == EmptyView {

    public init(_ titleKey: LocalizedStringKey, @ViewBuilder content: () -> Content)

    public init<S>(_ title: S, @ViewBuilder content: () -> Content) where S : StringProtocol
}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension Section where Parent : View, Content : View, Footer : View {

    public func collapsible(_ collapsible: Bool) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Section where Parent : View, Content : View, Footer : View {

    @available(iOS, deprecated: 100000.0, renamed: "Section(content:header:footer:)")
    @available(macOS, deprecated: 100000.0, renamed: "Section(content:header:footer:)")
    @available(tvOS, deprecated: 100000.0, renamed: "Section(content:header:footer:)")
    @available(watchOS, deprecated: 100000.0, renamed: "Section(content:header:footer:)")
    public init(header: Parent, footer: Footer, @ViewBuilder content: () -> Content)
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Section where Parent == EmptyView, Content : View, Footer : View {

    @available(iOS, deprecated: 100000.0, renamed: "Section(content:footer:)")
    @available(macOS, deprecated: 100000.0, renamed: "Section(content:footer:)")
    @available(tvOS, deprecated: 100000.0, renamed: "Section(content:footer:)")
    @available(watchOS, deprecated: 100000.0, renamed: "Section(content:footer:)")
    public init(footer: Footer, @ViewBuilder content: () -> Content)
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Section where Parent : View, Content : View, Footer == EmptyView {

    @available(iOS, deprecated: 100000.0, renamed: "Section(content:header:)")
    @available(macOS, deprecated: 100000.0, renamed: "Section(content:header:)")
    @available(tvOS, deprecated: 100000.0, renamed: "Section(content:header:)")
    @available(watchOS, deprecated: 100000.0, renamed: "Section(content:header:)")
    public init(header: Parent, @ViewBuilder content: () -> Content)
}

@available(iOS 16.0, macOS 13.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension Section : TableRowContent where Parent : TableRowContent, Content : TableRowContent, Footer : TableRowContent {

    public typealias TableRowValue = Content.TableRowValue

    public typealias TableRowBody = Never

    public init<V, H>(@TableRowBuilder<V> content: () -> Content, @ViewBuilder header: () -> H) where Parent == TableHeaderRowContent<V, H>, Footer == EmptyTableRowContent<V>, V == Content.TableRowValue, H : View

    public init<V>(_ titleKey: LocalizedStringKey, @TableRowBuilder<V> content: () -> Content) where Parent == TableHeaderRowContent<V, Text>, Footer == EmptyTableRowContent<V>, V == Content.TableRowValue

    public init<V, S>(_ title: S, @TableRowBuilder<V> content: () -> Content) where Parent == TableHeaderRowContent<V, Text>, Footer == EmptyTableRowContent<V>, V == Content.TableRowValue, S : StringProtocol

    public init<V>(@TableRowBuilder<V> content: () -> Content) where Parent == EmptyTableRowContent<V>, Footer == EmptyTableRowContent<V>, V == Content.TableRowValue
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
@propertyWrapper @MainActor public struct SectionedFetchRequest<SectionIdentifier, Result> where SectionIdentifier : Hashable, Result : NSFetchRequestResult {

    @MainActor public var wrappedValue: SectionedFetchResults<SectionIdentifier, Result> { get }

    public struct Configuration {

                                                        public var sectionIdentifier: KeyPath<Result, SectionIdentifier>

                                                                    public var nsSortDescriptors: [NSSortDescriptor]

                                            public var nsPredicate: NSPredicate?
    }

    @MainActor public var projectedValue: Binding<SectionedFetchRequest<SectionIdentifier, Result>.Configuration> { get }
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension SectionedFetchRequest : DynamicProperty {

    @MainActor public func update()
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension SectionedFetchRequest {

    @MainActor public init(entity: NSEntityDescription, sectionIdentifier: KeyPath<Result, SectionIdentifier>, sortDescriptors: [NSSortDescriptor], predicate: NSPredicate? = nil, animation: Animation? = nil)

    @MainActor public init(fetchRequest: NSFetchRequest<Result>, sectionIdentifier: KeyPath<Result, SectionIdentifier>, animation: Animation? = nil)

    @MainActor public init(fetchRequest: NSFetchRequest<Result>, sectionIdentifier: KeyPath<Result, SectionIdentifier>, transaction: Transaction)
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension SectionedFetchRequest where Result : NSManagedObject {

    @MainActor public init(sectionIdentifier: KeyPath<Result, SectionIdentifier>, sortDescriptors: [NSSortDescriptor], predicate: NSPredicate? = nil, animation: Animation? = nil)

    @MainActor public init(sectionIdentifier: KeyPath<Result, SectionIdentifier>, sortDescriptors: [SortDescriptor<Result>], predicate: NSPredicate? = nil, animation: Animation? = nil)
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension SectionedFetchRequest.Configuration where Result : NSManagedObject {

    public var sortDescriptors: [SortDescriptor<Result>]
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
public struct SectionedFetchResults<SectionIdentifier, Result> : RandomAccessCollection where SectionIdentifier : Hashable, Result : NSFetchRequestResult {

    public struct Section : Identifiable, RandomAccessCollection {

            public var startIndex: Int { get }

                public var endIndex: Int { get }

            public subscript(position: Int) -> Result { get }

                                        public let id: SectionIdentifier

            public typealias Element = Result

                public typealias ID = SectionIdentifier

                            public typealias Index = Int

                public typealias Indices = Range<Int>

                                public typealias Iterator = IndexingIterator<SectionedFetchResults<SectionIdentifier, Result>.Section>

                            public typealias SubSequence = Slice<SectionedFetchResults<SectionIdentifier, Result>.Section>
    }

    public var nsSortDescriptors: [NSSortDescriptor] { get nonmutating set }

    public var nsPredicate: NSPredicate? { get nonmutating set }

    public var sectionIdentifier: KeyPath<Result, SectionIdentifier> { get nonmutating set }

    public var startIndex: Int { get }

    public var endIndex: Int { get }

    public subscript(position: Int) -> SectionedFetchResults<SectionIdentifier, Result>.Section { get }

    public typealias Element = SectionedFetchResults<SectionIdentifier, Result>.Section

    public typealias Index = Int

    public typealias Indices = Range<Int>

    public typealias Iterator = IndexingIterator<SectionedFetchResults<SectionIdentifier, Result>>

    public typealias SubSequence = Slice<SectionedFetchResults<SectionIdentifier, Result>>
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension SectionedFetchResults where Result : NSManagedObject {

    public var sortDescriptors: [SortDescriptor<Result>] { get nonmutating set }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public struct SecureField<Label> : View where Label : View {

    @MainActor public var body: some View { get }

    public typealias Body = some View
}

extension SecureField where Label == Text {

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public init(_ titleKey: LocalizedStringKey, text: Binding<String>, prompt: Text?)

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public init<S>(_ title: S, text: Binding<String>, prompt: Text?) where S : StringProtocol
}

extension SecureField {

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public init(text: Binding<String>, prompt: Text? = nil, @ViewBuilder label: () -> Label)
}

extension SecureField where Label == Text {

    @available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
    public init(_ titleKey: LocalizedStringKey, text: Binding<String>)

    @available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
    public init<S>(_ title: S, text: Binding<String>) where S : StringProtocol
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension SecureField where Label == Text {

    @available(iOS, introduced: 13.0, deprecated: 100000.0, message: "Renamed SecureField.init(_:text:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter.")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Renamed SecureField.init(_:text:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter.")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "Renamed SecureField.init(_:text:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter.")
    @available(watchOS, introduced: 6.0, deprecated: 100000.0, message: "Renamed SecureField.init(_:text:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter.")
    public init(_ titleKey: LocalizedStringKey, text: Binding<String>, onCommit: @escaping () -> Void)

    @available(iOS, introduced: 13.0, deprecated: 100000.0, message: "Renamed SecureField.init(_:text:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter.")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Renamed SecureField.init(_:text:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter.")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "Renamed SecureField.init(_:text:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter.")
    @available(watchOS, introduced: 6.0, deprecated: 100000.0, message: "Renamed SecureField.init(_:text:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter.")
    public init<S>(_ title: S, text: Binding<String>, onCommit: @escaping () -> Void) where S : StringProtocol
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, *)
@available(watchOS, unavailable)
public struct SegmentedPickerStyle : PickerStyle {

    public init()
}

@available(iOS 15.0, macOS 10.15, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct SelectionShapeStyle : ShapeStyle {

    @available(macOS 12.0, *)
    public init()
}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct SeparatorShapeStyle : ShapeStyle {

    public init()
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct SequenceGesture<First, Second> : Gesture where First : Gesture, Second : Gesture {

    @frozen public enum Value {

            case first(First.Value)

            case second(First.Value, Second.Value?)
    }

    public var first: First

    public var second: Second

    @inlinable public init(_ first: First, _ second: Second)

    public typealias Body = Never
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension SequenceGesture.Value : Equatable where First.Value : Equatable, Second.Value : Equatable {

    public static func == (a: SequenceGesture<First, Second>.Value, b: SequenceGesture<First, Second>.Value) -> Bool
}

@available(macOS 11.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct Settings<Content> : Scene where Content : View {

    public init(@ViewBuilder content: () -> Content)

    @MainActor public var body: some Scene { get }

    public typealias Body = some Scene
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public struct ShadowStyle : Equatable {

    public static func drop(color: Color = .init(.sRGBLinear, white: 0, opacity: 0.33), radius: CGFloat, x: CGFloat = 0, y: CGFloat = 0) -> ShadowStyle

    public static func inner(color: Color = .init(.sRGBLinear, white: 0, opacity: 0.55), radius: CGFloat, x: CGFloat = 0, y: CGFloat = 0) -> ShadowStyle

    public static func == (a: ShadowStyle, b: ShadowStyle) -> Bool
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public protocol Shape : Animatable, View {

    func path(in rect: CGRect) -> Path

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    static var role: ShapeRole { get }

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    func sizeThatFits(_ proposal: ProposedViewSize) -> CGSize
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Shape {

    @inlinable public func fill<S>(_ content: S, style: FillStyle = FillStyle()) -> some View where S : ShapeStyle


    @inlinable public func fill(style: FillStyle = FillStyle()) -> some View


    @inlinable public func stroke<S>(_ content: S, style: StrokeStyle) -> some View where S : ShapeStyle


    @inlinable public func stroke<S>(_ content: S, lineWidth: CGFloat = 1) -> some View where S : ShapeStyle

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Shape {

    public var body: _ShapeView<Self, ForegroundStyle> { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Shape {

    @inlinable public func offset(_ offset: CGSize) -> OffsetShape<Self>

    @inlinable public func offset(_ offset: CGPoint) -> OffsetShape<Self>

    @inlinable public func offset(x: CGFloat = 0, y: CGFloat = 0) -> OffsetShape<Self>

    @inlinable public func scale(x: CGFloat = 1, y: CGFloat = 1, anchor: UnitPoint = .center) -> ScaledShape<Self>

    @inlinable public func scale(_ scale: CGFloat, anchor: UnitPoint = .center) -> ScaledShape<Self>

    @inlinable public func rotation(_ angle: Angle, anchor: UnitPoint = .center) -> RotatedShape<Self>

    @inlinable public func transform(_ transform: CGAffineTransform) -> TransformedShape<Self>
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Shape {

    @inlinable public func trim(from startFraction: CGFloat = 0, to endFraction: CGFloat = 1) -> some Shape

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Shape {

    @inlinable public func size(_ size: CGSize) -> some Shape


    @inlinable public func size(width: CGFloat, height: CGFloat) -> some Shape

}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension Shape {

    public func sizeThatFits(_ proposal: ProposedViewSize) -> CGSize
}

extension Shape {

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public static var role: ShapeRole { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Shape {

    @inlinable public func stroke(style: StrokeStyle) -> some Shape


    @inlinable public func stroke(lineWidth: CGFloat = 1) -> some Shape

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
public enum ShapeRole {

    case fill

    case stroke

    case separator

    public static func == (a: ShapeRole, b: ShapeRole) -> Bool

    public func hash(into hasher: inout Hasher)

    public var hashValue: Int { get }
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension ShapeRole : Equatable {
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension ShapeRole : Hashable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public protocol ShapeStyle {
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension ShapeStyle where Self == ForegroundStyle {

    public static var foreground: ForegroundStyle { get }
}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension ShapeStyle where Self == SeparatorShapeStyle {

    public static var separator: SeparatorShapeStyle { get }
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension ShapeStyle where Self == LinearGradient {

    public static func linearGradient(_ gradient: AnyGradient, startPoint: UnitPoint, endPoint: UnitPoint) -> some ShapeStyle

}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension ShapeStyle where Self == RadialGradient {

    public static func radialGradient(_ gradient: AnyGradient, center: UnitPoint = .center, startRadius: CGFloat = 0, endRadius: CGFloat) -> some ShapeStyle

}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension ShapeStyle where Self == EllipticalGradient {

    public static func ellipticalGradient(_ gradient: AnyGradient, center: UnitPoint = .center, startRadiusFraction: CGFloat = 0, endRadiusFraction: CGFloat = 0.5) -> some ShapeStyle

}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension ShapeStyle where Self == AngularGradient {

    public static func angularGradient(_ gradient: AnyGradient, center: UnitPoint = .center, startAngle: Angle, endAngle: Angle) -> some ShapeStyle


    public static func conicGradient(_ gradient: AnyGradient, center: UnitPoint = .center, angle: Angle = .zero) -> some ShapeStyle

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ShapeStyle {

    @inlinable public func `in`(_ rect: CGRect) -> some ShapeStyle

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, *)
@available(watchOS, unavailable)
extension ShapeStyle where Self == Material {

    public static var regularMaterial: Material { get }

    public static var thickMaterial: Material { get }

    public static var thinMaterial: Material { get }

    public static var ultraThinMaterial: Material { get }

    public static var ultraThickMaterial: Material { get }
}

@available(iOS 15.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension ShapeStyle where Self == Material {

    public static var bar: Material { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ShapeStyle where Self : View, Self.Body == _ShapeView<Rectangle, Self> {

    public var body: _ShapeView<Rectangle, Self> { get }
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension ShapeStyle {

    @inlinable public func opacity(_ opacity: Double) -> some ShapeStyle

}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension ShapeStyle where Self == AnyShapeStyle {

    public static func opacity(_ opacity: Double) -> some ShapeStyle

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension ShapeStyle {

    @inlinable public func blendMode(_ mode: BlendMode) -> some ShapeStyle

}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension ShapeStyle where Self == AnyShapeStyle {

    public static func blendMode(_ mode: BlendMode) -> some ShapeStyle

}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension ShapeStyle {

    @inlinable public func shadow(_ style: ShadowStyle) -> some ShapeStyle

}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension ShapeStyle where Self == AnyShapeStyle {

    public static func shadow(_ style: ShadowStyle) -> some ShapeStyle

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ShapeStyle where Self == LinearGradient {

    public static func linearGradient(_ gradient: Gradient, startPoint: UnitPoint, endPoint: UnitPoint) -> LinearGradient

    public static func linearGradient(colors: [Color], startPoint: UnitPoint, endPoint: UnitPoint) -> LinearGradient

    public static func linearGradient(stops: [Gradient.Stop], startPoint: UnitPoint, endPoint: UnitPoint) -> LinearGradient
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ShapeStyle where Self == RadialGradient {

    public static func radialGradient(_ gradient: Gradient, center: UnitPoint, startRadius: CGFloat, endRadius: CGFloat) -> RadialGradient

    public static func radialGradient(colors: [Color], center: UnitPoint, startRadius: CGFloat, endRadius: CGFloat) -> RadialGradient

    public static func radialGradient(stops: [Gradient.Stop], center: UnitPoint, startRadius: CGFloat, endRadius: CGFloat) -> RadialGradient
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension ShapeStyle where Self == EllipticalGradient {

    public static func ellipticalGradient(_ gradient: Gradient, center: UnitPoint = .center, startRadiusFraction: CGFloat = 0, endRadiusFraction: CGFloat = 0.5) -> EllipticalGradient

    public static func ellipticalGradient(colors: [Color], center: UnitPoint = .center, startRadiusFraction: CGFloat = 0, endRadiusFraction: CGFloat = 0.5) -> EllipticalGradient

    public static func ellipticalGradient(stops: [Gradient.Stop], center: UnitPoint = .center, startRadiusFraction: CGFloat = 0, endRadiusFraction: CGFloat = 0.5) -> EllipticalGradient
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ShapeStyle where Self == AngularGradient {

    public static func angularGradient(_ gradient: Gradient, center: UnitPoint, startAngle: Angle, endAngle: Angle) -> AngularGradient

    public static func angularGradient(colors: [Color], center: UnitPoint, startAngle: Angle, endAngle: Angle) -> AngularGradient

    public static func angularGradient(stops: [Gradient.Stop], center: UnitPoint, startAngle: Angle, endAngle: Angle) -> AngularGradient
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ShapeStyle where Self == AngularGradient {

    public static func conicGradient(_ gradient: Gradient, center: UnitPoint, angle: Angle = .zero) -> AngularGradient

    public static func conicGradient(colors: [Color], center: UnitPoint, angle: Angle = .zero) -> AngularGradient

    public static func conicGradient(stops: [Gradient.Stop], center: UnitPoint, angle: Angle = .zero) -> AngularGradient
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension ShapeStyle where Self == HierarchicalShapeStyle {

    public static var primary: HierarchicalShapeStyle { get }

    public static var secondary: HierarchicalShapeStyle { get }

    public static var tertiary: HierarchicalShapeStyle { get }

    public static var quaternary: HierarchicalShapeStyle { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ShapeStyle where Self == Color {

    public static var red: Color { get }

    public static var orange: Color { get }

    public static var yellow: Color { get }

    public static var green: Color { get }

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public static var mint: Color { get }

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public static var teal: Color { get }

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public static var cyan: Color { get }

    public static var blue: Color { get }

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public static var indigo: Color { get }

    public static var purple: Color { get }

    public static var pink: Color { get }

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public static var brown: Color { get }

    public static var white: Color { get }

    public static var gray: Color { get }

    public static var black: Color { get }

    public static var clear: Color { get }
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension ShapeStyle where Self == BackgroundStyle {

    public static var background: BackgroundStyle { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ShapeStyle where Self == ImagePaint {

    public static func image(_ image: Image, sourceRect: CGRect = CGRect(x: 0, y: 0, width: 1, height: 1), scale: CGFloat = 1) -> ImagePaint
}

@available(iOS 15.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension ShapeStyle where Self == SelectionShapeStyle {

    public static var selection: SelectionShapeStyle { get }
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension ShapeStyle where Self == TintShapeStyle {

    public static var tint: TintShapeStyle { get }
}

@available(iOS 16.0, macOS 13.0, watchOS 9.0, *)
@available(tvOS, unavailable)
public struct ShareLink<Data, PreviewImage, PreviewIcon, Label> : View where Data : RandomAccessCollection, PreviewImage : Transferable, PreviewIcon : Transferable, Label : View, Data.Element : Transferable {

    public init(items: Data, subject: Text? = nil, message: Text? = nil, preview: @escaping (Data.Element) -> SharePreview<PreviewImage, PreviewIcon>, @ViewBuilder label: () -> Label)

    @MainActor public var body: some View { get }

    public typealias Body = some View
}

@available(iOS 16.0, macOS 13.0, watchOS 9.0, *)
@available(tvOS, unavailable)
extension ShareLink {

    public init<I>(item: I, subject: Text? = nil, message: Text? = nil, preview: SharePreview<PreviewImage, PreviewIcon>, @ViewBuilder label: () -> Label) where Data == CollectionOfOne<I>, I : Transferable
}

@available(iOS 16.0, macOS 13.0, watchOS 9.0, *)
@available(tvOS, unavailable)
extension ShareLink where PreviewImage == Never, PreviewIcon == Never, Data.Element == URL {

    public init(items: Data, subject: Text? = nil, message: Text? = nil, @ViewBuilder label: () -> Label)
}

@available(iOS 16.0, macOS 13.0, watchOS 9.0, *)
@available(tvOS, unavailable)
extension ShareLink where PreviewImage == Never, PreviewIcon == Never, Data.Element == String {

    public init(items: Data, subject: Text? = nil, message: Text? = nil, @ViewBuilder label: () -> Label)
}

@available(iOS 16.0, macOS 13.0, watchOS 9.0, *)
@available(tvOS, unavailable)
extension ShareLink where PreviewImage == Never, PreviewIcon == Never {

    public init(item: URL, subject: Text? = nil, message: Text? = nil, @ViewBuilder label: () -> Label) where Data == CollectionOfOne<URL>

    public init(item: String, subject: Text? = nil, message: Text? = nil, @ViewBuilder label: () -> Label) where Data == CollectionOfOne<String>
}

@available(iOS 16.0, macOS 13.0, watchOS 9.0, *)
@available(tvOS, unavailable)
extension ShareLink where Label == DefaultShareLinkLabel {

    public init(items: Data, subject: Text? = nil, message: Text? = nil, preview: @escaping (Data.Element) -> SharePreview<PreviewImage, PreviewIcon>)

    public init(_ titleKey: LocalizedStringKey, items: Data, subject: Text? = nil, message: Text? = nil, preview: @escaping (Data.Element) -> SharePreview<PreviewImage, PreviewIcon>)

    public init<S>(_ title: S, items: Data, subject: Text? = nil, message: Text? = nil, preview: @escaping (Data.Element) -> SharePreview<PreviewImage, PreviewIcon>) where S : StringProtocol

    public init(_ title: Text, items: Data, subject: Text? = nil, message: Text? = nil, preview: @escaping (Data.Element) -> SharePreview<PreviewImage, PreviewIcon>)
}

@available(iOS 16.0, macOS 13.0, watchOS 9.0, *)
@available(tvOS, unavailable)
extension ShareLink where Label == DefaultShareLinkLabel {

    public init<I>(item: I, subject: Text? = nil, message: Text? = nil, preview: SharePreview<PreviewImage, PreviewIcon>) where Data == CollectionOfOne<I>, I : Transferable

    public init<I>(_ titleKey: LocalizedStringKey, item: I, subject: Text? = nil, message: Text? = nil, preview: SharePreview<PreviewImage, PreviewIcon>) where Data == CollectionOfOne<I>, I : Transferable

    public init<S, I>(_ title: S, item: I, subject: Text? = nil, message: Text? = nil, preview: SharePreview<PreviewImage, PreviewIcon>) where Data == CollectionOfOne<I>, S : StringProtocol, I : Transferable

    public init<I>(_ title: Text, item: I, subject: Text? = nil, message: Text? = nil, preview: SharePreview<PreviewImage, PreviewIcon>) where Data == CollectionOfOne<I>, I : Transferable
}

@available(iOS 16.0, macOS 13.0, watchOS 9.0, *)
@available(tvOS, unavailable)
extension ShareLink where PreviewImage == Never, PreviewIcon == Never, Label == DefaultShareLinkLabel, Data.Element == URL {

    public init(items: Data, subject: Text? = nil, message: Text? = nil)

    public init(_ titleKey: LocalizedStringKey, items: Data, subject: Text? = nil, message: Text? = nil)

    public init<S>(_ title: S, items: Data, subject: Text? = nil, message: Text? = nil) where S : StringProtocol

    public init(_ title: Text, items: Data, subject: Text? = nil, message: Text? = nil)
}

@available(iOS 16.0, macOS 13.0, watchOS 9.0, *)
@available(tvOS, unavailable)
extension ShareLink where PreviewImage == Never, PreviewIcon == Never, Label == DefaultShareLinkLabel, Data.Element == String {

    public init(items: Data, subject: Text? = nil, message: Text? = nil)

    public init(_ titleKey: LocalizedStringKey, items: Data, subject: Text? = nil, message: Text? = nil)

    public init<S>(_ title: S, items: Data, subject: Text? = nil, message: Text? = nil) where S : StringProtocol

    public init(_ title: Text, items: Data, subject: Text? = nil, message: Text? = nil)
}

@available(iOS 16.0, macOS 13.0, watchOS 9.0, *)
@available(tvOS, unavailable)
extension ShareLink where PreviewImage == Never, PreviewIcon == Never, Label == DefaultShareLinkLabel {

    public init(item: URL, subject: Text? = nil, message: Text? = nil) where Data == CollectionOfOne<URL>

    public init(item: String, subject: Text? = nil, message: Text? = nil) where Data == CollectionOfOne<String>

    public init(_ titleKey: LocalizedStringKey, item: URL, subject: Text? = nil, message: Text? = nil) where Data == CollectionOfOne<URL>

    public init(_ titleKey: LocalizedStringKey, item: String, subject: Text? = nil, message: Text? = nil) where Data == CollectionOfOne<String>

    public init<S>(_ title: S, item: URL, subject: Text? = nil, message: Text? = nil) where Data == CollectionOfOne<URL>, S : StringProtocol

    public init<S>(_ title: S, item: String, subject: Text? = nil, message: Text? = nil) where Data == CollectionOfOne<String>, S : StringProtocol

    public init(_ title: Text, item: URL, subject: Text? = nil, message: Text? = nil) where Data == CollectionOfOne<URL>

    public init(_ title: Text, item: String, subject: Text? = nil, message: Text? = nil) where Data == CollectionOfOne<String>
}

@available(iOS 16.0, macOS 13.0, watchOS 9.0, *)
@available(tvOS, unavailable)
public struct SharePreview<Image, Icon> where Image : Transferable, Icon : Transferable {

    public init(_ titleKey: LocalizedStringKey, image: Image, icon: Icon)

    public init<S>(_ title: S, image: Image, icon: Icon) where S : StringProtocol

    public init(_ title: Text, image: Image, icon: Icon)
}

@available(iOS 16.0, macOS 13.0, watchOS 9.0, *)
@available(tvOS, unavailable)
extension SharePreview where Image == Never {

    public init(_ titleKey: LocalizedStringKey, icon: Icon)

    public init<S>(_ title: S, icon: Icon) where S : StringProtocol

    public init(_ title: Text, icon: Icon)
}

@available(iOS 16.0, macOS 13.0, watchOS 9.0, *)
@available(tvOS, unavailable)
extension SharePreview where Icon == Never {

    public init(_ titleKey: LocalizedStringKey, image: Image)

    public init<S>(_ title: S, image: Image) where S : StringProtocol

    public init(_ title: Text, image: Image)
}

@available(iOS 16.0, macOS 13.0, watchOS 9.0, *)
@available(tvOS, unavailable)
extension SharePreview where Image == Never, Icon == Never {

    public init(_ titleKey: LocalizedStringKey)

    public init<S>(_ title: S) where S : StringProtocol

    public init(_ title: Text)
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct SidebarCommands : Commands {

    public init()

    public var body: some Commands { get }

    public typealias Body = some Commands
}

@available(iOS 14.0, macOS 10.15, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct SidebarListStyle : ListStyle {

    public init()
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct SimultaneousGesture<First, Second> : Gesture where First : Gesture, Second : Gesture {

    @frozen public struct Value {

            public var first: First.Value?

            public var second: Second.Value?
    }

    public var first: First

    public var second: Second

    @inlinable public init(_ first: First, _ second: Second)

    public typealias Body = Never
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension SimultaneousGesture.Value : Equatable where First.Value : Equatable, Second.Value : Equatable {

    public static func == (a: SimultaneousGesture<First, Second>.Value, b: SimultaneousGesture<First, Second>.Value) -> Bool
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension SimultaneousGesture.Value : Hashable where First.Value : Hashable, Second.Value : Hashable {

    public func hash(into hasher: inout Hasher)

    public var hashValue: Int { get }
}

@available(iOS 13.0, macOS 10.15, watchOS 6.0, *)
@available(tvOS, unavailable)
public struct Slider<Label, ValueLabel> : View where Label : View, ValueLabel : View {

    @MainActor public var body: some View { get }

    public typealias Body = some View
}

@available(iOS 13.0, macOS 10.15, watchOS 6.0, *)
@available(tvOS, unavailable)
extension Slider {

    @available(tvOS, unavailable)
    public init<V>(value: Binding<V>, in bounds: ClosedRange<V> = 0...1, @ViewBuilder label: () -> Label, @ViewBuilder minimumValueLabel: () -> ValueLabel, @ViewBuilder maximumValueLabel: () -> ValueLabel, onEditingChanged: @escaping (Bool) -> Void = { _ in }) where V : BinaryFloatingPoint, V.Stride : BinaryFloatingPoint

    @available(tvOS, unavailable)
    public init<V>(value: Binding<V>, in bounds: ClosedRange<V>, step: V.Stride = 1, @ViewBuilder label: () -> Label, @ViewBuilder minimumValueLabel: () -> ValueLabel, @ViewBuilder maximumValueLabel: () -> ValueLabel, onEditingChanged: @escaping (Bool) -> Void = { _ in }) where V : BinaryFloatingPoint, V.Stride : BinaryFloatingPoint
}

@available(iOS 13.0, macOS 10.15, watchOS 6.0, *)
@available(tvOS, unavailable)
extension Slider where ValueLabel == EmptyView {

    @available(tvOS, unavailable)
    public init<V>(value: Binding<V>, in bounds: ClosedRange<V> = 0...1, @ViewBuilder label: () -> Label, onEditingChanged: @escaping (Bool) -> Void = { _ in }) where V : BinaryFloatingPoint, V.Stride : BinaryFloatingPoint

    @available(tvOS, unavailable)
    public init<V>(value: Binding<V>, in bounds: ClosedRange<V>, step: V.Stride = 1, @ViewBuilder label: () -> Label, onEditingChanged: @escaping (Bool) -> Void = { _ in }) where V : BinaryFloatingPoint, V.Stride : BinaryFloatingPoint
}

@available(iOS 13.0, macOS 10.15, watchOS 6.0, *)
@available(tvOS, unavailable)
extension Slider where Label == EmptyView, ValueLabel == EmptyView {

    @available(tvOS, unavailable)
    public init<V>(value: Binding<V>, in bounds: ClosedRange<V> = 0...1, onEditingChanged: @escaping (Bool) -> Void = { _ in }) where V : BinaryFloatingPoint, V.Stride : BinaryFloatingPoint

    @available(tvOS, unavailable)
    public init<V>(value: Binding<V>, in bounds: ClosedRange<V>, step: V.Stride = 1, onEditingChanged: @escaping (Bool) -> Void = { _ in }) where V : BinaryFloatingPoint, V.Stride : BinaryFloatingPoint
}

@available(iOS 13.0, macOS 10.15, watchOS 6.0, *)
@available(tvOS, unavailable)
extension Slider {

    @available(tvOS, unavailable)
    @available(iOS, deprecated: 100000.0, renamed: "Slider(value:in:label:minimumValueLabel:maximumValueLabel:onEditingChanged:)")
    @available(macOS, deprecated: 100000.0, renamed: "Slider(value:in:label:minimumValueLabel:maximumValueLabel:onEditingChanged:)")
    @available(watchOS, deprecated: 100000.0, renamed: "Slider(value:in:label:minimumValueLabel:maximumValueLabel:onEditingChanged:)")
    public init<V>(value: Binding<V>, in bounds: ClosedRange<V> = 0...1, onEditingChanged: @escaping (Bool) -> Void = { _ in }, minimumValueLabel: ValueLabel, maximumValueLabel: ValueLabel, @ViewBuilder label: () -> Label) where V : BinaryFloatingPoint, V.Stride : BinaryFloatingPoint

    @available(tvOS, unavailable)
    @available(iOS, deprecated: 100000.0, renamed: "Slider(value:in:step:label:minimumValueLabel:maximumValueLabel:onEditingChanged:)")
    @available(macOS, deprecated: 100000.0, renamed: "Slider(value:in:step:label:minimumValueLabel:maximumValueLabel:onEditingChanged:)")
    @available(watchOS, deprecated: 100000.0, renamed: "Slider(value:in:step:label:minimumValueLabel:maximumValueLabel:onEditingChanged:)")
    public init<V>(value: Binding<V>, in bounds: ClosedRange<V>, step: V.Stride = 1, onEditingChanged: @escaping (Bool) -> Void = { _ in }, minimumValueLabel: ValueLabel, maximumValueLabel: ValueLabel, @ViewBuilder label: () -> Label) where V : BinaryFloatingPoint, V.Stride : BinaryFloatingPoint
}

@available(iOS 13.0, macOS 10.15, watchOS 6.0, *)
@available(tvOS, unavailable)
extension Slider where ValueLabel == EmptyView {

    @available(tvOS, unavailable)
    @available(iOS, deprecated: 100000.0, renamed: "Slider(value:in:label:onEditingChanged:)")
    @available(macOS, deprecated: 100000.0, renamed: "Slider(value:in:label:onEditingChanged:)")
    @available(watchOS, deprecated: 100000.0, renamed: "Slider(value:in:label:onEditingChanged:)")
    public init<V>(value: Binding<V>, in bounds: ClosedRange<V> = 0...1, onEditingChanged: @escaping (Bool) -> Void = { _ in }, @ViewBuilder label: () -> Label) where V : BinaryFloatingPoint, V.Stride : BinaryFloatingPoint

    @available(tvOS, unavailable)
    @available(iOS, deprecated: 100000.0, renamed: "Slider(value:in:step:label:onEditingChanged:)")
    @available(macOS, deprecated: 100000.0, renamed: "Slider(value:in:step:label:onEditingChanged:)")
    @available(watchOS, deprecated: 100000.0, renamed: "Slider(value:in:step:label:onEditingChanged:)")
    public init<V>(value: Binding<V>, in bounds: ClosedRange<V>, step: V.Stride = 1, onEditingChanged: @escaping (Bool) -> Void = { _ in }, @ViewBuilder label: () -> Label) where V : BinaryFloatingPoint, V.Stride : BinaryFloatingPoint
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct Spacer {

    public var minLength: CGFloat?

    @inlinable public init(minLength: CGFloat? = nil)

    public typealias Body = Never
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Spacer : View {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Spacer : Sendable {
}

@available(iOS 16.0, macOS 13.0, watchOS 9.0, *)
@available(tvOS, unavailable)
public struct SpatialTapGesture : Gesture {

    public struct Value : Equatable {

            public var location: CGPoint

                                        public static func == (a: SpatialTapGesture.Value, b: SpatialTapGesture.Value) -> Bool
    }

    public var count: Int

    public var coordinateSpace: CoordinateSpace

    public init(count: Int = 1, coordinateSpace: CoordinateSpace = .local)

    public typealias Body = Never
}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct SquareBorderTextFieldStyle : TextFieldStyle {

    public init()
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen @propertyWrapper public struct State<Value> : DynamicProperty {

    public init(wrappedValue value: Value)

    public init(initialValue value: Value)

    public var wrappedValue: Value { get nonmutating set }

    public var projectedValue: Binding<Value> { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension State where Value : ExpressibleByNilLiteral {

    @inlinable public init()
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
@frozen @propertyWrapper public struct StateObject<ObjectType> : DynamicProperty where ObjectType : ObservableObject {

    @inlinable public init(wrappedValue thunk: @autoclosure @escaping () -> ObjectType)

    @MainActor public var wrappedValue: ObjectType { get }

    @MainActor public var projectedValue: ObservedObject<ObjectType>.Wrapper { get }
}

@available(iOS 13.0, macOS 10.15, watchOS 9.0, *)
@available(tvOS, unavailable)
public struct Stepper<Label> : View where Label : View {

    public init(@ViewBuilder label: () -> Label, onIncrement: (() -> Void)?, onDecrement: (() -> Void)?, onEditingChanged: @escaping (Bool) -> Void = { _ in })

    @MainActor public var body: some View { get }

    public typealias Body = some View
}

@available(iOS 13.0, macOS 10.15, watchOS 9.0, *)
@available(tvOS, unavailable)
extension Stepper {

    @available(watchOS 9.0, *)
    @available(tvOS, unavailable)
    public init<V>(value: Binding<V>, step: V.Stride = 1, @ViewBuilder label: () -> Label, onEditingChanged: @escaping (Bool) -> Void = { _ in }) where V : Strideable

    @available(watchOS 9.0, *)
    @available(tvOS, unavailable)
    public init<V>(value: Binding<V>, in bounds: ClosedRange<V>, step: V.Stride = 1, @ViewBuilder label: () -> Label, onEditingChanged: @escaping (Bool) -> Void = { _ in }) where V : Strideable
}

@available(iOS 13.0, macOS 10.15, watchOS 9.0, *)
@available(tvOS, unavailable)
extension Stepper where Label == Text {

    @available(watchOS 9.0, *)
    @available(tvOS, unavailable)
    public init(_ titleKey: LocalizedStringKey, onIncrement: (() -> Void)?, onDecrement: (() -> Void)?, onEditingChanged: @escaping (Bool) -> Void = { _ in })

    @available(watchOS 9.0, *)
    @available(tvOS, unavailable)
    public init<S>(_ title: S, onIncrement: (() -> Void)?, onDecrement: (() -> Void)?, onEditingChanged: @escaping (Bool) -> Void = { _ in }) where S : StringProtocol

    @available(watchOS 9.0, *)
    @available(tvOS, unavailable)
    public init<V>(_ titleKey: LocalizedStringKey, value: Binding<V>, step: V.Stride = 1, onEditingChanged: @escaping (Bool) -> Void = { _ in }) where V : Strideable

    @available(watchOS 9.0, *)
    @available(tvOS, unavailable)
    public init<S, V>(_ title: S, value: Binding<V>, step: V.Stride = 1, onEditingChanged: @escaping (Bool) -> Void = { _ in }) where S : StringProtocol, V : Strideable

    @available(watchOS 9.0, *)
    @available(tvOS, unavailable)
    public init<V>(_ titleKey: LocalizedStringKey, value: Binding<V>, in bounds: ClosedRange<V>, step: V.Stride = 1, onEditingChanged: @escaping (Bool) -> Void = { _ in }) where V : Strideable

    @available(watchOS 9.0, *)
    @available(tvOS, unavailable)
    public init<S, V>(_ title: S, value: Binding<V>, in bounds: ClosedRange<V>, step: V.Stride = 1, onEditingChanged: @escaping (Bool) -> Void = { _ in }) where S : StringProtocol, V : Strideable
}

@available(iOS 16.0, macOS 13.0, watchOS 9.0, *)
@available(tvOS, unavailable)
extension Stepper {

    public init<F>(value: Binding<F.FormatInput>, step: F.FormatInput.Stride = 1, format: F, @ViewBuilder label: () -> Label, onEditingChanged: @escaping (Bool) -> Void = { _ in }) where F : ParseableFormatStyle, F.FormatInput : BinaryFloatingPoint, F.FormatOutput == String

    public init<F>(value: Binding<F.FormatInput>, in bounds: ClosedRange<F.FormatInput>, step: F.FormatInput.Stride = 1, format: F, @ViewBuilder label: () -> Label, onEditingChanged: @escaping (Bool) -> Void = { _ in }) where F : ParseableFormatStyle, F.FormatInput : BinaryFloatingPoint, F.FormatOutput == String
}

@available(iOS 16.0, macOS 13.0, watchOS 9.0, *)
@available(tvOS, unavailable)
extension Stepper where Label == Text {

    public init<F>(_ titleKey: LocalizedStringKey, value: Binding<F.FormatInput>, step: F.FormatInput.Stride = 1, format: F, onEditingChanged: @escaping (Bool) -> Void = { _ in }) where F : ParseableFormatStyle, F.FormatInput : BinaryFloatingPoint, F.FormatOutput == String

    public init<S, F>(_ title: S, value: Binding<F.FormatInput>, step: F.FormatInput.Stride = 1, format: F, onEditingChanged: @escaping (Bool) -> Void = { _ in }) where S : StringProtocol, F : ParseableFormatStyle, F.FormatInput : BinaryFloatingPoint, F.FormatOutput == String

    public init<F>(_ titleKey: LocalizedStringKey, value: Binding<F.FormatInput>, in bounds: ClosedRange<F.FormatInput>, step: F.FormatInput.Stride = 1, format: F, onEditingChanged: @escaping (Bool) -> Void = { _ in }) where F : ParseableFormatStyle, F.FormatInput : BinaryFloatingPoint, F.FormatOutput == String

    public init<S, F>(_ title: S, value: Binding<F.FormatInput>, in bounds: ClosedRange<F.FormatInput>, step: F.FormatInput.Stride = 1, format: F, onEditingChanged: @escaping (Bool) -> Void = { _ in }) where S : StringProtocol, F : ParseableFormatStyle, F.FormatInput : BinaryFloatingPoint, F.FormatOutput == String
}

@available(iOS 13.0, macOS 10.15, watchOS 9.0, *)
@available(tvOS, unavailable)
extension Stepper {

    @available(iOS, deprecated: 100000.0, renamed: "Stepper(label:onIncrement:onDecrement:onEditingChanged:)")
    @available(macOS, deprecated: 100000.0, renamed: "Stepper(label:onIncrement:onDecrement:onEditingChanged:)")
    public init(onIncrement: (() -> Void)?, onDecrement: (() -> Void)?, onEditingChanged: @escaping (Bool) -> Void = { _ in }, @ViewBuilder label: () -> Label)

    @available(watchOS 9.0, *)
    @available(iOS, deprecated: 100000.0, renamed: "Stepper(value:step:label:onEditingChanged:)")
    @available(macOS, deprecated: 100000.0, renamed: "Stepper(value:step:label:onEditingChanged:)")
    @available(tvOS, unavailable)
    public init<V>(value: Binding<V>, step: V.Stride = 1, onEditingChanged: @escaping (Bool) -> Void = { _ in }, @ViewBuilder label: () -> Label) where V : Strideable

    @available(watchOS 9.0, *)
    @available(iOS, deprecated: 100000.0, renamed: "Stepper(value:in:step:label:onEditingChanged:)")
    @available(macOS, deprecated: 100000.0, renamed: "Stepper(value:in:step:label:onEditingChanged:)")
    @available(tvOS, unavailable)
    public init<V>(value: Binding<V>, in bounds: ClosedRange<V>, step: V.Stride = 1, onEditingChanged: @escaping (Bool) -> Void = { _ in }, @ViewBuilder label: () -> Label) where V : Strideable
}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct StepperFieldDatePickerStyle : DatePickerStyle {

    public init()

    public func makeBody(configuration: StepperFieldDatePickerStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct StrokeStyle : Equatable {

    public var lineWidth: CGFloat

    public var lineCap: CGLineCap

    public var lineJoin: CGLineJoin

    public var miterLimit: CGFloat

    public var dash: [CGFloat]

    public var dashPhase: CGFloat

    public init(lineWidth: CGFloat = 1, lineCap: CGLineCap = .butt, lineJoin: CGLineJoin = .miter, miterLimit: CGFloat = 10, dash: [CGFloat] = [CGFloat](), dashPhase: CGFloat = 0)

    public static func == (a: StrokeStyle, b: StrokeStyle) -> Bool
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension StrokeStyle : Animatable {

    public typealias AnimatableData = AnimatablePair<CGFloat, AnimatablePair<CGFloat, CGFloat>>

    public var animatableData: StrokeStyle.AnimatableData
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension StrokeStyle : Sendable {
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
public struct SubmitLabel {

    public static var done: SubmitLabel { get }

    public static var go: SubmitLabel { get }

    public static var send: SubmitLabel { get }

    public static var join: SubmitLabel { get }

    public static var route: SubmitLabel { get }

    public static var search: SubmitLabel { get }

    public static var `return`: SubmitLabel { get }

    public static var next: SubmitLabel { get }

    public static var `continue`: SubmitLabel { get }
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
public struct SubmitTriggers : OptionSet {

    public typealias RawValue = Int

    public let rawValue: SubmitTriggers.RawValue

    public init(rawValue: SubmitTriggers.RawValue)

    public static let text: SubmitTriggers

    public static let search: SubmitTriggers

    public typealias ArrayLiteralElement = SubmitTriggers

    public typealias Element = SubmitTriggers
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct SubscriptionView<PublisherType, Content> : View where PublisherType : Publisher, Content : View, PublisherType.Failure == Never {

    public var content: Content

    public var publisher: PublisherType

    public var action: (PublisherType.Output) -> Void

    @inlinable public init(content: Content, publisher: PublisherType, action: @escaping (PublisherType.Output) -> Void)

    public typealias Body = Never
}

@available(iOS 13.0, macOS 10.15, watchOS 6.0, *)
@available(tvOS, unavailable)
public struct SwitchToggleStyle : ToggleStyle {

    public init()

    @available(iOS, introduced: 14.0, deprecated: 100000.0, message: "Use ``View/tint(_)`` instead.")
    @available(macOS, introduced: 11.0, deprecated: 100000.0, message: "Use ``View/tint(_)`` instead.")
    @available(tvOS, unavailable)
    @available(watchOS, introduced: 7.0, deprecated: 100000.0, message: "Use ``View/tint(_)`` instead.")
    public init(tint: Color)

    public func makeBody(configuration: SwitchToggleStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
public struct SymbolRenderingMode {

    public static let monochrome: SymbolRenderingMode

    public static let multicolor: SymbolRenderingMode

    public static let hierarchical: SymbolRenderingMode

    public static let palette: SymbolRenderingMode
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
public struct SymbolVariants : Hashable {

    public static let none: SymbolVariants

    public static let circle: SymbolVariants

    public static let square: SymbolVariants

    public static let rectangle: SymbolVariants

    public var circle: SymbolVariants { get }

    public var square: SymbolVariants { get }

    public var rectangle: SymbolVariants { get }

    public static let fill: SymbolVariants

    public var fill: SymbolVariants { get }

    public static let slash: SymbolVariants

    public var slash: SymbolVariants { get }

    public func contains(_ other: SymbolVariants) -> Bool

    public func hash(into hasher: inout Hasher)

    public static func == (a: SymbolVariants, b: SymbolVariants) -> Bool

    public var hashValue: Int { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 7.0, *)
public struct TabView<SelectionValue, Content> : View where SelectionValue : Hashable, Content : View {

    @available(iOS, deprecated: 100000.0, message: "Use SelectableTabsBuilder based TabView initializers instead")
    @available(macOS, deprecated: 100000.0, message: "Use SelectableTabsBuilder based TabView initializers instead")
    @available(tvOS, deprecated: 100000.0, message: "Use SelectableTabsBuilder based TabView initializers instead")
    @available(watchOS, deprecated: 100000.0, message: "Use SelectableTabsBuilder based TabView initializers instead")
    public init(selection: Binding<SelectionValue>?, @ViewBuilder content: () -> Content)

    @MainActor public var body: some View { get }

    public typealias Body = some View
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 7.0, *)
extension TabView where SelectionValue == Int {

    public init(@ViewBuilder content: () -> Content)
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public protocol TabViewStyle {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 7.0, *)
extension TabViewStyle where Self == DefaultTabViewStyle {

    public static var automatic: DefaultTabViewStyle { get }
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct Table<Value, Rows, Columns> : View where Value == Rows.TableRowValue, Rows : TableRowContent, Columns : TableColumnContent, Rows.TableRowValue == Columns.TableRowValue {

    public typealias Body = Never
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension Table {

    public init(@TableColumnBuilder<Value, Never> columns: () -> Columns, @TableRowBuilder<Value> rows: () -> Rows)

    public init(selection: Binding<Value.ID?>, @TableColumnBuilder<Value, Never> columns: () -> Columns, @TableRowBuilder<Value> rows: () -> Rows)

    public init(selection: Binding<Set<Value.ID>>, @TableColumnBuilder<Value, Never> columns: () -> Columns, @TableRowBuilder<Value> rows: () -> Rows)

    public init<Sort>(sortOrder: Binding<[Sort]>, @TableColumnBuilder<Value, Sort> columns: () -> Columns, @TableRowBuilder<Value> rows: () -> Rows) where Sort : SortComparator, Columns.TableRowValue == Sort.Compared

    public init<Sort>(selection: Binding<Value.ID?>, sortOrder: Binding<[Sort]>, @TableColumnBuilder<Value, Sort> columns: () -> Columns, @TableRowBuilder<Value> rows: () -> Rows) where Sort : SortComparator, Columns.TableRowValue == Sort.Compared

    public init<Sort>(selection: Binding<Set<Value.ID>>, sortOrder: Binding<[Sort]>, @TableColumnBuilder<Value, Sort> columns: () -> Columns, @TableRowBuilder<Value> rows: () -> Rows) where Sort : SortComparator, Columns.TableRowValue == Sort.Compared
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension Table {

    public init<Data>(_ data: Data, @TableColumnBuilder<Value, Never> columns: () -> Columns) where Rows == TableForEachContent<Data>, Data : RandomAccessCollection, Columns.TableRowValue == Data.Element

    public init<Data>(_ data: Data, selection: Binding<Value.ID?>, @TableColumnBuilder<Value, Never> columns: () -> Columns) where Rows == TableForEachContent<Data>, Data : RandomAccessCollection, Columns.TableRowValue == Data.Element

    public init<Data>(_ data: Data, selection: Binding<Set<Value.ID>>, @TableColumnBuilder<Value, Never> columns: () -> Columns) where Rows == TableForEachContent<Data>, Data : RandomAccessCollection, Columns.TableRowValue == Data.Element

    public init<Data, Sort>(_ data: Data, sortOrder: Binding<[Sort]>, @TableColumnBuilder<Value, Sort> columns: () -> Columns) where Rows == TableForEachContent<Data>, Data : RandomAccessCollection, Sort : SortComparator, Columns.TableRowValue == Data.Element, Data.Element == Sort.Compared

    public init<Data, Sort>(_ data: Data, selection: Binding<Value.ID?>, sortOrder: Binding<[Sort]>, @TableColumnBuilder<Value, Sort> columns: () -> Columns) where Rows == TableForEachContent<Data>, Data : RandomAccessCollection, Sort : SortComparator, Columns.TableRowValue == Data.Element, Data.Element == Sort.Compared

    public init<Data, Sort>(_ data: Data, selection: Binding<Set<Value.ID>>, sortOrder: Binding<[Sort]>, @TableColumnBuilder<Value, Sort> columns: () -> Columns) where Rows == TableForEachContent<Data>, Data : RandomAccessCollection, Sort : SortComparator, Columns.TableRowValue == Data.Element, Data.Element == Sort.Compared
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct TableColumn<RowValue, Sort, Content, Label> : TableColumnContent where RowValue : Identifiable, Sort : SortComparator, Content : View, Label : View {

    public typealias TableRowValue = RowValue

    public typealias TableColumnSortComparator = Sort

    public typealias TableColumnBody = Never
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension TableColumn where RowValue == Sort.Compared, Label == Text {

    public init(_ titleKey: LocalizedStringKey, sortUsing comparator: Sort, @ViewBuilder content: @escaping (RowValue) -> Content)

    public init<S>(_ title: S, sortUsing comparator: Sort, @ViewBuilder content: @escaping (RowValue) -> Content) where S : StringProtocol
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension TableColumn where Sort == Never, Label == Text {

    public init(_ titleKey: LocalizedStringKey, @ViewBuilder content: @escaping (RowValue) -> Content)

    public init<S>(_ title: S, @ViewBuilder content: @escaping (RowValue) -> Content) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, value: KeyPath<RowValue, String>) where Content == Text

    public init<S>(_ title: S, value: KeyPath<RowValue, String>) where Content == Text, S : StringProtocol
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension TableColumn {

    public func width(_ width: CGFloat? = nil) -> TableColumn<RowValue, Sort, Content, Label>

    public func width(min: CGFloat? = nil, ideal: CGFloat? = nil, max: CGFloat? = nil) -> TableColumn<RowValue, Sort, Content, Label>

    @available(*, deprecated, message: "Please pass one or more parameters to modify a column's width.")
    public func width() -> TableColumn<RowValue, Sort, Content, Label>
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension TableColumn where Sort == KeyPathComparator<RowValue>, Label == Text {

    public init<V>(_ titleKey: LocalizedStringKey, value: KeyPath<RowValue, V>, @ViewBuilder content: @escaping (RowValue) -> Content) where V : Comparable

    public init<S, V>(_ title: S, value: KeyPath<RowValue, V>, @ViewBuilder content: @escaping (RowValue) -> Content) where S : StringProtocol, V : Comparable

    public init<V, C>(_ titleKey: LocalizedStringKey, value: KeyPath<RowValue, V>, comparator: C, @ViewBuilder content: @escaping (RowValue) -> Content) where V == C.Compared, C : SortComparator

    public init<S, V, C>(_ title: S, value: KeyPath<RowValue, V>, comparator: C, @ViewBuilder content: @escaping (RowValue) -> Content) where S : StringProtocol, V == C.Compared, C : SortComparator

    public init(_ titleKey: LocalizedStringKey, value: KeyPath<RowValue, String>, comparator: String.StandardComparator = .localizedStandard) where Content == Text

    public init<S>(_ title: S, value: KeyPath<RowValue, String>, comparator: String.StandardComparator = .localizedStandard) where Content == Text, S : StringProtocol
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension TableColumn where RowValue : NSObject, Sort == SortDescriptor<RowValue>, Label == Text {

    public init(_ titleKey: LocalizedStringKey, value: KeyPath<RowValue, Bool>, @ViewBuilder content: @escaping (RowValue) -> Content)

    public init<S>(_ title: S, value: KeyPath<RowValue, Bool>, @ViewBuilder content: @escaping (RowValue) -> Content) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, value: KeyPath<RowValue, Bool?>, @ViewBuilder content: @escaping (RowValue) -> Content)

    public init<S>(_ title: S, value: KeyPath<RowValue, Bool?>, @ViewBuilder content: @escaping (RowValue) -> Content) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, value: KeyPath<RowValue, Double>, @ViewBuilder content: @escaping (RowValue) -> Content)

    public init<S>(_ title: S, value: KeyPath<RowValue, Double>, @ViewBuilder content: @escaping (RowValue) -> Content) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, value: KeyPath<RowValue, Double?>, @ViewBuilder content: @escaping (RowValue) -> Content)

    public init<S>(_ title: S, value: KeyPath<RowValue, Double?>, @ViewBuilder content: @escaping (RowValue) -> Content) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, value: KeyPath<RowValue, Float>, @ViewBuilder content: @escaping (RowValue) -> Content)

    public init<S>(_ title: S, value: KeyPath<RowValue, Float>, @ViewBuilder content: @escaping (RowValue) -> Content) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, value: KeyPath<RowValue, Float?>, @ViewBuilder content: @escaping (RowValue) -> Content)

    public init<S>(_ title: S, value: KeyPath<RowValue, Float?>, @ViewBuilder content: @escaping (RowValue) -> Content) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, value: KeyPath<RowValue, Int8>, @ViewBuilder content: @escaping (RowValue) -> Content)

    public init<S>(_ title: S, value: KeyPath<RowValue, Int8>, @ViewBuilder content: @escaping (RowValue) -> Content) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, value: KeyPath<RowValue, Int8?>, @ViewBuilder content: @escaping (RowValue) -> Content)

    public init<S>(_ title: S, value: KeyPath<RowValue, Int8?>, @ViewBuilder content: @escaping (RowValue) -> Content) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, value: KeyPath<RowValue, Int16>, @ViewBuilder content: @escaping (RowValue) -> Content)

    public init<S>(_ title: S, value: KeyPath<RowValue, Int16>, @ViewBuilder content: @escaping (RowValue) -> Content) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, value: KeyPath<RowValue, Int16?>, @ViewBuilder content: @escaping (RowValue) -> Content)

    public init<S>(_ title: S, value: KeyPath<RowValue, Int16?>, @ViewBuilder content: @escaping (RowValue) -> Content) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, value: KeyPath<RowValue, Int32>, @ViewBuilder content: @escaping (RowValue) -> Content)

    public init<S>(_ title: S, value: KeyPath<RowValue, Int32>, @ViewBuilder content: @escaping (RowValue) -> Content) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, value: KeyPath<RowValue, Int32?>, @ViewBuilder content: @escaping (RowValue) -> Content)

    public init<S>(_ title: S, value: KeyPath<RowValue, Int32?>, @ViewBuilder content: @escaping (RowValue) -> Content) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, value: KeyPath<RowValue, Int64>, @ViewBuilder content: @escaping (RowValue) -> Content)

    public init<S>(_ title: S, value: KeyPath<RowValue, Int64>, @ViewBuilder content: @escaping (RowValue) -> Content) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, value: KeyPath<RowValue, Int64?>, @ViewBuilder content: @escaping (RowValue) -> Content)

    public init<S>(_ title: S, value: KeyPath<RowValue, Int64?>, @ViewBuilder content: @escaping (RowValue) -> Content) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, value: KeyPath<RowValue, Int>, @ViewBuilder content: @escaping (RowValue) -> Content)

    public init<S>(_ title: S, value: KeyPath<RowValue, Int>, @ViewBuilder content: @escaping (RowValue) -> Content) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, value: KeyPath<RowValue, Int?>, @ViewBuilder content: @escaping (RowValue) -> Content)

    public init<S>(_ title: S, value: KeyPath<RowValue, Int?>, @ViewBuilder content: @escaping (RowValue) -> Content) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, value: KeyPath<RowValue, UInt8>, @ViewBuilder content: @escaping (RowValue) -> Content)

    public init<S>(_ title: S, value: KeyPath<RowValue, UInt8>, @ViewBuilder content: @escaping (RowValue) -> Content) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, value: KeyPath<RowValue, UInt8?>, @ViewBuilder content: @escaping (RowValue) -> Content)

    public init<S>(_ title: S, value: KeyPath<RowValue, UInt8?>, @ViewBuilder content: @escaping (RowValue) -> Content) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, value: KeyPath<RowValue, UInt16>, @ViewBuilder content: @escaping (RowValue) -> Content)

    public init<S>(_ title: S, value: KeyPath<RowValue, UInt16>, @ViewBuilder content: @escaping (RowValue) -> Content) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, value: KeyPath<RowValue, UInt16?>, @ViewBuilder content: @escaping (RowValue) -> Content)

    public init<S>(_ title: S, value: KeyPath<RowValue, UInt16?>, @ViewBuilder content: @escaping (RowValue) -> Content) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, value: KeyPath<RowValue, UInt32>, @ViewBuilder content: @escaping (RowValue) -> Content)

    public init<S>(_ title: S, value: KeyPath<RowValue, UInt32>, @ViewBuilder content: @escaping (RowValue) -> Content) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, value: KeyPath<RowValue, UInt32?>, @ViewBuilder content: @escaping (RowValue) -> Content)

    public init<S>(_ title: S, value: KeyPath<RowValue, UInt32?>, @ViewBuilder content: @escaping (RowValue) -> Content) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, value: KeyPath<RowValue, UInt64>, @ViewBuilder content: @escaping (RowValue) -> Content)

    public init<S>(_ title: S, value: KeyPath<RowValue, UInt64>, @ViewBuilder content: @escaping (RowValue) -> Content) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, value: KeyPath<RowValue, UInt64?>, @ViewBuilder content: @escaping (RowValue) -> Content)

    public init<S>(_ title: S, value: KeyPath<RowValue, UInt64?>, @ViewBuilder content: @escaping (RowValue) -> Content) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, value: KeyPath<RowValue, UInt>, @ViewBuilder content: @escaping (RowValue) -> Content)

    public init<S>(_ title: S, value: KeyPath<RowValue, UInt>, @ViewBuilder content: @escaping (RowValue) -> Content) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, value: KeyPath<RowValue, UInt?>, @ViewBuilder content: @escaping (RowValue) -> Content)

    public init<S>(_ title: S, value: KeyPath<RowValue, UInt?>, @ViewBuilder content: @escaping (RowValue) -> Content) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, value: KeyPath<RowValue, Date>, @ViewBuilder content: @escaping (RowValue) -> Content)

    public init<S>(_ title: S, value: KeyPath<RowValue, Date>, @ViewBuilder content: @escaping (RowValue) -> Content) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, value: KeyPath<RowValue, Date?>, @ViewBuilder content: @escaping (RowValue) -> Content)

    public init<S>(_ title: S, value: KeyPath<RowValue, Date?>, @ViewBuilder content: @escaping (RowValue) -> Content) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, value: KeyPath<RowValue, UUID>, @ViewBuilder content: @escaping (RowValue) -> Content)

    public init<S>(_ title: S, value: KeyPath<RowValue, UUID>, @ViewBuilder content: @escaping (RowValue) -> Content) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, value: KeyPath<RowValue, UUID?>, @ViewBuilder content: @escaping (RowValue) -> Content)

    public init<S>(_ title: S, value: KeyPath<RowValue, UUID?>, @ViewBuilder content: @escaping (RowValue) -> Content) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, value: KeyPath<RowValue, String>, comparator: String.StandardComparator = .localizedStandard, @ViewBuilder content: @escaping (RowValue) -> Content)

    public init<S>(_ title: S, value: KeyPath<RowValue, String>, comparator: String.StandardComparator = .localizedStandard, @ViewBuilder content: @escaping (RowValue) -> Content) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, value: KeyPath<RowValue, String?>, comparator: String.StandardComparator = .localizedStandard, @ViewBuilder content: @escaping (RowValue) -> Content)

    public init<S>(_ title: S, value: KeyPath<RowValue, String?>, comparator: String.StandardComparator = .localizedStandard, @ViewBuilder content: @escaping (RowValue) -> Content) where S : StringProtocol

    public init(_ titleKey: LocalizedStringKey, value: KeyPath<RowValue, String>, comparator: String.StandardComparator = .localizedStandard) where Content == Text

    public init<S>(_ title: S, value: KeyPath<RowValue, String>, comparator: String.StandardComparator = .localizedStandard) where Content == Text, S : StringProtocol
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
@resultBuilder public struct TableColumnBuilder<RowValue, Sort> where RowValue : Identifiable, Sort : SortComparator {

    public static func buildExpression<Content, Label>(_ column: TableColumn<RowValue, Sort, Content, Label>) -> TableColumn<RowValue, Sort, Content, Label> where Content : View, Label : View

    public static func buildExpression<Content, Label>(_ column: TableColumn<RowValue, Never, Content, Label>) -> TableColumn<RowValue, Never, Content, Label> where Content : View, Label : View

    public static func buildExpression<Column>(_ column: Column) -> Column where RowValue == Column.TableRowValue, Sort == Column.TableColumnSortComparator, Column : TableColumnContent

    public static func buildExpression<Column>(_ column: Column) -> Column where RowValue == Column.TableRowValue, Column : TableColumnContent, Column.TableColumnSortComparator == Never

    public static func buildBlock<Column>(_ column: Column) -> Column where RowValue == Column.TableRowValue, Sort == Column.TableColumnSortComparator, Column : TableColumnContent

    public static func buildBlock<Column>(_ column: Column) -> Column where RowValue == Column.TableRowValue, Column : TableColumnContent, Column.TableColumnSortComparator == Never
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension TableColumnBuilder {

    public static func buildBlock<C0, C1>(_ c0: C0, _ c1: C1) -> TupleTableColumnContent<RowValue, Sort, (C0, C1)> where RowValue == C0.TableRowValue, C0 : TableColumnContent, C1 : TableColumnContent, C0.TableRowValue == C1.TableRowValue

    public static func buildBlock<C0, C1>(_ c0: C0, _ c1: C1) -> TupleTableColumnContent<RowValue, Never, (C0, C1)> where RowValue == C0.TableRowValue, C0 : TableColumnContent, C1 : TableColumnContent, C0.TableColumnSortComparator == Never, C0.TableRowValue == C1.TableRowValue, C1.TableColumnSortComparator == Never
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension TableColumnBuilder {

    public static func buildBlock<C0, C1, C2>(_ c0: C0, _ c1: C1, _ c2: C2) -> TupleTableColumnContent<RowValue, Sort, (C0, C1, C2)> where RowValue == C0.TableRowValue, C0 : TableColumnContent, C1 : TableColumnContent, C2 : TableColumnContent, C0.TableRowValue == C1.TableRowValue, C1.TableRowValue == C2.TableRowValue

    public static func buildBlock<C0, C1, C2>(_ c0: C0, _ c1: C1, _ c2: C2) -> TupleTableColumnContent<RowValue, Never, (C0, C1, C2)> where RowValue == C0.TableRowValue, C0 : TableColumnContent, C1 : TableColumnContent, C2 : TableColumnContent, C0.TableColumnSortComparator == Never, C0.TableRowValue == C1.TableRowValue, C1.TableColumnSortComparator == Never, C1.TableRowValue == C2.TableRowValue, C2.TableColumnSortComparator == Never
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension TableColumnBuilder {

    public static func buildBlock<C0, C1, C2, C3>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3) -> TupleTableColumnContent<RowValue, Sort, (C0, C1, C2, C3)> where RowValue == C0.TableRowValue, C0 : TableColumnContent, C1 : TableColumnContent, C2 : TableColumnContent, C3 : TableColumnContent, C0.TableRowValue == C1.TableRowValue, C1.TableRowValue == C2.TableRowValue, C2.TableRowValue == C3.TableRowValue

    public static func buildBlock<C0, C1, C2, C3>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3) -> TupleTableColumnContent<RowValue, Never, (C0, C1, C2, C3)> where RowValue == C0.TableRowValue, C0 : TableColumnContent, C1 : TableColumnContent, C2 : TableColumnContent, C3 : TableColumnContent, C0.TableColumnSortComparator == Never, C0.TableRowValue == C1.TableRowValue, C1.TableColumnSortComparator == Never, C1.TableRowValue == C2.TableRowValue, C2.TableColumnSortComparator == Never, C2.TableRowValue == C3.TableRowValue, C3.TableColumnSortComparator == Never
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension TableColumnBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4) -> TupleTableColumnContent<RowValue, Sort, (C0, C1, C2, C3, C4)> where RowValue == C0.TableRowValue, C0 : TableColumnContent, C1 : TableColumnContent, C2 : TableColumnContent, C3 : TableColumnContent, C4 : TableColumnContent, C0.TableRowValue == C1.TableRowValue, C1.TableRowValue == C2.TableRowValue, C2.TableRowValue == C3.TableRowValue, C3.TableRowValue == C4.TableRowValue

    public static func buildBlock<C0, C1, C2, C3, C4>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4) -> TupleTableColumnContent<RowValue, Never, (C0, C1, C2, C3, C4)> where RowValue == C0.TableRowValue, C0 : TableColumnContent, C1 : TableColumnContent, C2 : TableColumnContent, C3 : TableColumnContent, C4 : TableColumnContent, C0.TableColumnSortComparator == Never, C0.TableRowValue == C1.TableRowValue, C1.TableColumnSortComparator == Never, C1.TableRowValue == C2.TableRowValue, C2.TableColumnSortComparator == Never, C2.TableRowValue == C3.TableRowValue, C3.TableColumnSortComparator == Never, C3.TableRowValue == C4.TableRowValue, C4.TableColumnSortComparator == Never
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension TableColumnBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5) -> TupleTableColumnContent<RowValue, Sort, (C0, C1, C2, C3, C4, C5)> where RowValue == C0.TableRowValue, C0 : TableColumnContent, C1 : TableColumnContent, C2 : TableColumnContent, C3 : TableColumnContent, C4 : TableColumnContent, C5 : TableColumnContent, C0.TableRowValue == C1.TableRowValue, C1.TableRowValue == C2.TableRowValue, C2.TableRowValue == C3.TableRowValue, C3.TableRowValue == C4.TableRowValue, C4.TableRowValue == C5.TableRowValue

    public static func buildBlock<C0, C1, C2, C3, C4, C5>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5) -> TupleTableColumnContent<RowValue, Never, (C0, C1, C2, C3, C4, C5)> where RowValue == C0.TableRowValue, C0 : TableColumnContent, C1 : TableColumnContent, C2 : TableColumnContent, C3 : TableColumnContent, C4 : TableColumnContent, C5 : TableColumnContent, C0.TableColumnSortComparator == Never, C0.TableRowValue == C1.TableRowValue, C1.TableColumnSortComparator == Never, C1.TableRowValue == C2.TableRowValue, C2.TableColumnSortComparator == Never, C2.TableRowValue == C3.TableRowValue, C3.TableColumnSortComparator == Never, C3.TableRowValue == C4.TableRowValue, C4.TableColumnSortComparator == Never, C4.TableRowValue == C5.TableRowValue, C5.TableColumnSortComparator == Never
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension TableColumnBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6) -> TupleTableColumnContent<RowValue, Sort, (C0, C1, C2, C3, C4, C5, C6)> where RowValue == C0.TableRowValue, C0 : TableColumnContent, C1 : TableColumnContent, C2 : TableColumnContent, C3 : TableColumnContent, C4 : TableColumnContent, C5 : TableColumnContent, C6 : TableColumnContent, C0.TableRowValue == C1.TableRowValue, C1.TableRowValue == C2.TableRowValue, C2.TableRowValue == C3.TableRowValue, C3.TableRowValue == C4.TableRowValue, C4.TableRowValue == C5.TableRowValue, C5.TableRowValue == C6.TableRowValue

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6) -> TupleTableColumnContent<RowValue, Never, (C0, C1, C2, C3, C4, C5, C6)> where RowValue == C0.TableRowValue, C0 : TableColumnContent, C1 : TableColumnContent, C2 : TableColumnContent, C3 : TableColumnContent, C4 : TableColumnContent, C5 : TableColumnContent, C6 : TableColumnContent, C0.TableColumnSortComparator == Never, C0.TableRowValue == C1.TableRowValue, C1.TableColumnSortComparator == Never, C1.TableRowValue == C2.TableRowValue, C2.TableColumnSortComparator == Never, C2.TableRowValue == C3.TableRowValue, C3.TableColumnSortComparator == Never, C3.TableRowValue == C4.TableRowValue, C4.TableColumnSortComparator == Never, C4.TableRowValue == C5.TableRowValue, C5.TableColumnSortComparator == Never, C5.TableRowValue == C6.TableRowValue, C6.TableColumnSortComparator == Never
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension TableColumnBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6, C7>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6, _ c7: C7) -> TupleTableColumnContent<RowValue, Sort, (C0, C1, C2, C3, C4, C5, C6, C7)> where RowValue == C0.TableRowValue, C0 : TableColumnContent, C1 : TableColumnContent, C2 : TableColumnContent, C3 : TableColumnContent, C4 : TableColumnContent, C5 : TableColumnContent, C6 : TableColumnContent, C7 : TableColumnContent, C0.TableRowValue == C1.TableRowValue, C1.TableRowValue == C2.TableRowValue, C2.TableRowValue == C3.TableRowValue, C3.TableRowValue == C4.TableRowValue, C4.TableRowValue == C5.TableRowValue, C5.TableRowValue == C6.TableRowValue, C6.TableRowValue == C7.TableRowValue

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6, C7>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6, _ c7: C7) -> TupleTableColumnContent<RowValue, Never, (C0, C1, C2, C3, C4, C5, C6, C7)> where RowValue == C0.TableRowValue, C0 : TableColumnContent, C1 : TableColumnContent, C2 : TableColumnContent, C3 : TableColumnContent, C4 : TableColumnContent, C5 : TableColumnContent, C6 : TableColumnContent, C7 : TableColumnContent, C0.TableColumnSortComparator == Never, C0.TableRowValue == C1.TableRowValue, C1.TableColumnSortComparator == Never, C1.TableRowValue == C2.TableRowValue, C2.TableColumnSortComparator == Never, C2.TableRowValue == C3.TableRowValue, C3.TableColumnSortComparator == Never, C3.TableRowValue == C4.TableRowValue, C4.TableColumnSortComparator == Never, C4.TableRowValue == C5.TableRowValue, C5.TableColumnSortComparator == Never, C5.TableRowValue == C6.TableRowValue, C6.TableColumnSortComparator == Never, C6.TableRowValue == C7.TableRowValue, C7.TableColumnSortComparator == Never
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension TableColumnBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6, C7, C8>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6, _ c7: C7, _ c8: C8) -> TupleTableColumnContent<RowValue, Sort, (C0, C1, C2, C3, C4, C5, C6, C7, C8)> where RowValue == C0.TableRowValue, C0 : TableColumnContent, C1 : TableColumnContent, C2 : TableColumnContent, C3 : TableColumnContent, C4 : TableColumnContent, C5 : TableColumnContent, C6 : TableColumnContent, C7 : TableColumnContent, C8 : TableColumnContent, C0.TableRowValue == C1.TableRowValue, C1.TableRowValue == C2.TableRowValue, C2.TableRowValue == C3.TableRowValue, C3.TableRowValue == C4.TableRowValue, C4.TableRowValue == C5.TableRowValue, C5.TableRowValue == C6.TableRowValue, C6.TableRowValue == C7.TableRowValue, C7.TableRowValue == C8.TableRowValue

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6, C7, C8>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6, _ c7: C7, _ c8: C8) -> TupleTableColumnContent<RowValue, Never, (C0, C1, C2, C3, C4, C5, C6, C7, C8)> where RowValue == C0.TableRowValue, C0 : TableColumnContent, C1 : TableColumnContent, C2 : TableColumnContent, C3 : TableColumnContent, C4 : TableColumnContent, C5 : TableColumnContent, C6 : TableColumnContent, C7 : TableColumnContent, C8 : TableColumnContent, C0.TableColumnSortComparator == Never, C0.TableRowValue == C1.TableRowValue, C1.TableColumnSortComparator == Never, C1.TableRowValue == C2.TableRowValue, C2.TableColumnSortComparator == Never, C2.TableRowValue == C3.TableRowValue, C3.TableColumnSortComparator == Never, C3.TableRowValue == C4.TableRowValue, C4.TableColumnSortComparator == Never, C4.TableRowValue == C5.TableRowValue, C5.TableColumnSortComparator == Never, C5.TableRowValue == C6.TableRowValue, C6.TableColumnSortComparator == Never, C6.TableRowValue == C7.TableRowValue, C7.TableColumnSortComparator == Never, C7.TableRowValue == C8.TableRowValue, C8.TableColumnSortComparator == Never
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension TableColumnBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6, C7, C8, C9>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6, _ c7: C7, _ c8: C8, _ c9: C9) -> TupleTableColumnContent<RowValue, Sort, (C0, C1, C2, C3, C4, C5, C6, C7, C8, C9)> where RowValue == C0.TableRowValue, C0 : TableColumnContent, C1 : TableColumnContent, C2 : TableColumnContent, C3 : TableColumnContent, C4 : TableColumnContent, C5 : TableColumnContent, C6 : TableColumnContent, C7 : TableColumnContent, C8 : TableColumnContent, C9 : TableColumnContent, C0.TableRowValue == C1.TableRowValue, C1.TableRowValue == C2.TableRowValue, C2.TableRowValue == C3.TableRowValue, C3.TableRowValue == C4.TableRowValue, C4.TableRowValue == C5.TableRowValue, C5.TableRowValue == C6.TableRowValue, C6.TableRowValue == C7.TableRowValue, C7.TableRowValue == C8.TableRowValue, C8.TableRowValue == C9.TableRowValue

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6, C7, C8, C9>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6, _ c7: C7, _ c8: C8, _ c9: C9) -> TupleTableColumnContent<RowValue, Never, (C0, C1, C2, C3, C4, C5, C6, C7, C8, C9)> where RowValue == C0.TableRowValue, C0 : TableColumnContent, C1 : TableColumnContent, C2 : TableColumnContent, C3 : TableColumnContent, C4 : TableColumnContent, C5 : TableColumnContent, C6 : TableColumnContent, C7 : TableColumnContent, C8 : TableColumnContent, C9 : TableColumnContent, C0.TableColumnSortComparator == Never, C0.TableRowValue == C1.TableRowValue, C1.TableColumnSortComparator == Never, C1.TableRowValue == C2.TableRowValue, C2.TableColumnSortComparator == Never, C2.TableRowValue == C3.TableRowValue, C3.TableColumnSortComparator == Never, C3.TableRowValue == C4.TableRowValue, C4.TableColumnSortComparator == Never, C4.TableRowValue == C5.TableRowValue, C5.TableColumnSortComparator == Never, C5.TableRowValue == C6.TableRowValue, C6.TableColumnSortComparator == Never, C6.TableRowValue == C7.TableRowValue, C7.TableColumnSortComparator == Never, C7.TableRowValue == C8.TableRowValue, C8.TableColumnSortComparator == Never, C8.TableRowValue == C9.TableRowValue, C9.TableColumnSortComparator == Never
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public protocol TableColumnContent {

    associatedtype TableRowValue : Identifiable = Self.TableColumnBody.TableRowValue

    associatedtype TableColumnSortComparator : SortComparator = Self.TableColumnBody.TableColumnSortComparator

    associatedtype TableColumnBody : TableColumnContent

    var tableColumnBody: Self.TableColumnBody { get }
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct TableForEachContent<Data> : TableRowContent where Data : RandomAccessCollection, Data.Element : Identifiable {

    public typealias TableRowValue = Data.Element

    public var tableRowBody: some TableRowContent { get }

    public typealias TableRowBody = some TableRowContent
}

@available(iOS 16.0, macOS 13.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct TableHeaderRowContent<Value, Content> : TableRowContent where Value : Identifiable, Content : View {

    public typealias TableRowValue = Value

    public typealias TableRowBody = Never
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct TableRow<Value> : TableRowContent where Value : Identifiable {

    public typealias TableRowValue = Value

    public typealias TableRowBody = Never

    public init(_ value: Value)
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
@resultBuilder public struct TableRowBuilder<Value> where Value : Identifiable {

    public static func buildBlock<C>(_ content: C) -> C where Value == C.TableRowValue, C : TableRowContent
}

@available(iOS 16.0, macOS 13.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension TableRowBuilder {

    public static func buildIf<C>(_ content: C?) -> C? where Value == C.TableRowValue, C : TableRowContent

    public static func buildEither<T, F>(first: T) -> _ConditionalContent<T, F> where Value == T.TableRowValue, T : TableRowContent, F : TableRowContent, T.TableRowValue == F.TableRowValue

    public static func buildEither<T, F>(second: F) -> _ConditionalContent<T, F> where Value == T.TableRowValue, T : TableRowContent, F : TableRowContent, T.TableRowValue == F.TableRowValue
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension TableRowBuilder {

    public static func buildBlock<C0, C1>(_ c0: C0, _ c1: C1) -> TupleTableRowContent<Value, (C0, C1)> where Value == C0.TableRowValue, C0 : TableRowContent, C1 : TableRowContent, C0.TableRowValue == C1.TableRowValue
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension TableRowBuilder {

    public static func buildBlock<C0, C1, C2>(_ c0: C0, _ c1: C1, _ c2: C2) -> TupleTableRowContent<Value, (C0, C1, C2)> where Value == C0.TableRowValue, C0 : TableRowContent, C1 : TableRowContent, C2 : TableRowContent, C0.TableRowValue == C1.TableRowValue, C1.TableRowValue == C2.TableRowValue
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension TableRowBuilder {

    public static func buildBlock<C0, C1, C2, C3>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3) -> TupleTableRowContent<Value, (C0, C1, C2, C3)> where Value == C0.TableRowValue, C0 : TableRowContent, C1 : TableRowContent, C2 : TableRowContent, C3 : TableRowContent, C0.TableRowValue == C1.TableRowValue, C1.TableRowValue == C2.TableRowValue, C2.TableRowValue == C3.TableRowValue
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension TableRowBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4) -> TupleTableRowContent<Value, (C0, C1, C2, C3, C4)> where Value == C0.TableRowValue, C0 : TableRowContent, C1 : TableRowContent, C2 : TableRowContent, C3 : TableRowContent, C4 : TableRowContent, C0.TableRowValue == C1.TableRowValue, C1.TableRowValue == C2.TableRowValue, C2.TableRowValue == C3.TableRowValue, C3.TableRowValue == C4.TableRowValue
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension TableRowBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5) -> TupleTableRowContent<Value, (C0, C1, C2, C3, C4, C5)> where Value == C0.TableRowValue, C0 : TableRowContent, C1 : TableRowContent, C2 : TableRowContent, C3 : TableRowContent, C4 : TableRowContent, C5 : TableRowContent, C0.TableRowValue == C1.TableRowValue, C1.TableRowValue == C2.TableRowValue, C2.TableRowValue == C3.TableRowValue, C3.TableRowValue == C4.TableRowValue, C4.TableRowValue == C5.TableRowValue
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension TableRowBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6) -> TupleTableRowContent<Value, (C0, C1, C2, C3, C4, C5, C6)> where Value == C0.TableRowValue, C0 : TableRowContent, C1 : TableRowContent, C2 : TableRowContent, C3 : TableRowContent, C4 : TableRowContent, C5 : TableRowContent, C6 : TableRowContent, C0.TableRowValue == C1.TableRowValue, C1.TableRowValue == C2.TableRowValue, C2.TableRowValue == C3.TableRowValue, C3.TableRowValue == C4.TableRowValue, C4.TableRowValue == C5.TableRowValue, C5.TableRowValue == C6.TableRowValue
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension TableRowBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6, C7>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6, _ c7: C7) -> TupleTableRowContent<Value, (C0, C1, C2, C3, C4, C5, C6, C7)> where Value == C0.TableRowValue, C0 : TableRowContent, C1 : TableRowContent, C2 : TableRowContent, C3 : TableRowContent, C4 : TableRowContent, C5 : TableRowContent, C6 : TableRowContent, C7 : TableRowContent, C0.TableRowValue == C1.TableRowValue, C1.TableRowValue == C2.TableRowValue, C2.TableRowValue == C3.TableRowValue, C3.TableRowValue == C4.TableRowValue, C4.TableRowValue == C5.TableRowValue, C5.TableRowValue == C6.TableRowValue, C6.TableRowValue == C7.TableRowValue
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension TableRowBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6, C7, C8>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6, _ c7: C7, _ c8: C8) -> TupleTableRowContent<Value, (C0, C1, C2, C3, C4, C5, C6, C7, C8)> where Value == C0.TableRowValue, C0 : TableRowContent, C1 : TableRowContent, C2 : TableRowContent, C3 : TableRowContent, C4 : TableRowContent, C5 : TableRowContent, C6 : TableRowContent, C7 : TableRowContent, C8 : TableRowContent, C0.TableRowValue == C1.TableRowValue, C1.TableRowValue == C2.TableRowValue, C2.TableRowValue == C3.TableRowValue, C3.TableRowValue == C4.TableRowValue, C4.TableRowValue == C5.TableRowValue, C5.TableRowValue == C6.TableRowValue, C6.TableRowValue == C7.TableRowValue, C7.TableRowValue == C8.TableRowValue
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension TableRowBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6, C7, C8, C9>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6, _ c7: C7, _ c8: C8, _ c9: C9) -> TupleTableRowContent<Value, (C0, C1, C2, C3, C4, C5, C6, C7, C8, C9)> where Value == C0.TableRowValue, C0 : TableRowContent, C1 : TableRowContent, C2 : TableRowContent, C3 : TableRowContent, C4 : TableRowContent, C5 : TableRowContent, C6 : TableRowContent, C7 : TableRowContent, C8 : TableRowContent, C9 : TableRowContent, C0.TableRowValue == C1.TableRowValue, C1.TableRowValue == C2.TableRowValue, C2.TableRowValue == C3.TableRowValue, C3.TableRowValue == C4.TableRowValue, C4.TableRowValue == C5.TableRowValue, C5.TableRowValue == C6.TableRowValue, C6.TableRowValue == C7.TableRowValue, C7.TableRowValue == C8.TableRowValue, C8.TableRowValue == C9.TableRowValue
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public protocol TableRowContent {

    associatedtype TableRowValue : Identifiable = Self.TableRowBody.TableRowValue

    associatedtype TableRowBody : TableRowContent

    var tableRowBody: Self.TableRowBody { get }
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension TableRowContent {

    public func itemProvider(_ action: (() -> NSItemProvider?)?) -> ModifiedContent<Self, ItemProviderTableRowModifier>
}

@available(iOS 16.0, macOS 13.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension TableRowContent {

    public func contextMenu<M>(@ViewBuilder menuItems: () -> M) -> ModifiedContent<Self, _ContextMenuTableRowModifier<M>> where M : View

    public func contextMenu<M, P>(@ViewBuilder menuItems: () -> M, @ViewBuilder preview: () -> P) -> ModifiedContent<Self, _ContextMenuPreviewTableRowModifier<M, P>> where M : View, P : View
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public protocol TableStyle {

    associatedtype Body : View

    @ViewBuilder func makeBody(configuration: Self.Configuration) -> Self.Body

    typealias Configuration = TableStyleConfiguration
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension TableStyle where Self == AutomaticTableStyle {

    public static var automatic: AutomaticTableStyle { get }
}

@available(macOS 12.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension TableStyle where Self == BorderedTableStyle {

    public static var bordered: BorderedTableStyle { get }

    public static func bordered(alternatesRowBackgrounds: Bool) -> BorderedTableStyle
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension TableStyle where Self == InsetTableStyle {

    public static var inset: InsetTableStyle { get }

    @available(iOS, unavailable)
    public static func inset(alternatesRowBackgrounds: Bool) -> InsetTableStyle
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct TableStyleConfiguration {
}

@available(iOS 13.0, macOS 10.15, tvOS 16.0, watchOS 6.0, *)
public struct TapGesture : Gesture {

    public var count: Int

    public init(count: Int = 1)

    public typealias Body = Never

    public typealias Value = Void
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct Text : Equatable {

    @inlinable public init(verbatim content: String)

    public init<S>(_ content: S) where S : StringProtocol

    public static func == (a: Text, b: Text) -> Bool
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Text {

    public func foregroundColor(_ color: Color?) -> Text

    public func font(_ font: Font?) -> Text

    public func fontWeight(_ weight: Font.Weight?) -> Text

    public func bold() -> Text

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public func bold(_ isActive: Bool) -> Text

    public func italic() -> Text

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public func italic(_ isActive: Bool) -> Text

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public func monospacedDigit() -> Text

    public func strikethrough(_ isActive: Bool = true, color: Color? = nil) -> Text

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public func strikethrough(_ isActive: Bool = true, pattern: Text.LineStyle.Pattern, color: Color? = nil) -> Text

    public func underline(_ isActive: Bool = true, color: Color? = nil) -> Text

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public func underline(_ isActive: Bool = true, pattern: Text.LineStyle.Pattern, color: Color? = nil) -> Text

    public func kerning(_ kerning: CGFloat) -> Text

    public func tracking(_ tracking: CGFloat) -> Text

    public func baselineOffset(_ baselineOffset: CGFloat) -> Text
}

extension Text {

    @available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
    public init(_ image: Image)
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension Text {

    public func accessibilityTextContentType(_ value: AccessibilityTextContentType) -> Text

    public func accessibilityHeading(_ level: AccessibilityHeadingLevel) -> Text

    public func accessibilityLabel(_ label: Text) -> Text

    public func accessibilityLabel(_ labelKey: LocalizedStringKey) -> Text

    public func accessibilityLabel<S>(_ label: S) -> Text where S : StringProtocol
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension Text {

    public struct DateStyle {

                                public static let time: Text.DateStyle

                                public static let date: Text.DateStyle

                                    public static let relative: Text.DateStyle

                                    public static let offset: Text.DateStyle

                                    public static let timer: Text.DateStyle
    }

    public init(_ date: Date, style: Text.DateStyle)

    public init(_ dates: ClosedRange<Date>)

    public init(_ interval: DateInterval)
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension Text {

    public func speechAlwaysIncludesPunctuation(_ value: Bool = true) -> Text

    public func speechSpellsOutCharacters(_ value: Bool = true) -> Text

    public func speechAdjustedPitch(_ value: Double) -> Text

    public func speechAnnouncementsQueued(_ value: Bool = true) -> Text
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension Text {

    public init<Subject>(_ subject: Subject, formatter: Formatter) where Subject : ReferenceConvertible

    public init<Subject>(_ subject: Subject, formatter: Formatter) where Subject : NSObject
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension Text {

    public init<F>(_ input: F.FormatInput, format: F) where F : FormatStyle, F.FormatInput : Equatable, F.FormatOutput == String
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Text {

    public init(_ key: LocalizedStringKey, tableName: String? = nil, bundle: Bundle? = nil, comment: StaticString? = nil)
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension Text {

    public struct LineStyle : Hashable {

                                public init(pattern: Text.LineStyle.Pattern = .solid, color: Color? = nil)

            public struct Pattern {

                    public static let solid: Text.LineStyle.Pattern

                    public static let dot: Text.LineStyle.Pattern

                    public static let dash: Text.LineStyle.Pattern

            public static let dashDot: Text.LineStyle.Pattern

                    public static let dashDotDot: Text.LineStyle.Pattern
        }

            public static let single: Text.LineStyle

                                                        public init?(nsUnderlineStyle: NSUnderlineStyle)

                                                            public func hash(into hasher: inout Hasher)

                                        public static func == (a: Text.LineStyle, b: Text.LineStyle) -> Bool

                                    public var hashValue: Int { get }
    }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Text {

    public static func + (lhs: Text, rhs: Text) -> Text
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension Text {

    public init(_ attributedContent: AttributedString)
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Text {

    public enum TruncationMode {

                            case head

                            case tail

                            case middle

                                        public static func == (a: Text.TruncationMode, b: Text.TruncationMode) -> Bool

                                                            public func hash(into hasher: inout Hasher)

                                    public var hashValue: Int { get }
    }

    @available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
    public enum Case {

                            case uppercase

                            case lowercase

                                        public static func == (a: Text.Case, b: Text.Case) -> Bool

                                                            public func hash(into hasher: inout Hasher)

                                    public var hashValue: Int { get }
    }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Text : View {

    public typealias Body = Never
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension Text.DateStyle : Equatable {

    public static func == (a: Text.DateStyle, b: Text.DateStyle) -> Bool
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension Text.DateStyle : Codable {

    public func encode(to encoder: Encoder) throws

    public init(from decoder: Decoder) throws
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Text.TruncationMode : Equatable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Text.TruncationMode : Hashable {
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension Text.Case : Equatable {
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension Text.Case : Hashable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public enum TextAlignment : Hashable, CaseIterable {

    case leading

    case center

    case trailing

    public static func == (a: TextAlignment, b: TextAlignment) -> Bool

    public func hash(into hasher: inout Hasher)

    public typealias AllCases = [TextAlignment]

    public static var allCases: [TextAlignment] { get }

    public var hashValue: Int { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension TextAlignment : Sendable {
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct TextEditingCommands : Commands {

    public init()

    public var body: some Commands { get }

    public typealias Body = some Commands
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct TextEditor : View {

    public init(text: Binding<String>)

    @MainActor public var body: some View { get }

    public typealias Body = some View
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public struct TextField<Label> : View where Label : View {

    @MainActor public var body: some View { get }

    public typealias Body = some View
}

extension TextField where Label == Text {

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public init(_ titleKey: LocalizedStringKey, text: Binding<String>, axis: Axis)

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public init(_ titleKey: LocalizedStringKey, text: Binding<String>, prompt: Text?, axis: Axis)

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public init<S>(_ title: S, text: Binding<String>, axis: Axis) where S : StringProtocol

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public init<S>(_ title: S, text: Binding<String>, prompt: Text?, axis: Axis) where S : StringProtocol
}

extension TextField {

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public init(text: Binding<String>, prompt: Text? = nil, axis: Axis, @ViewBuilder label: () -> Label)
}

extension TextField where Label == Text {

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public init(_ titleKey: LocalizedStringKey, text: Binding<String>, prompt: Text?)

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public init<S>(_ title: S, text: Binding<String>, prompt: Text?) where S : StringProtocol
}

extension TextField {

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public init(text: Binding<String>, prompt: Text? = nil, @ViewBuilder label: () -> Label)
}

extension TextField where Label == Text {

    @available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
    public init(_ titleKey: LocalizedStringKey, text: Binding<String>)

    @available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
    public init<S>(_ title: S, text: Binding<String>) where S : StringProtocol
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension TextField where Label == Text {

    @available(iOS, introduced: 13.0, deprecated: 100000.0, message: "Renamed TextField.init(_:text:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Renamed TextField.init(_:text:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "Renamed TextField.init(_:text:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    @available(watchOS, introduced: 6.0, deprecated: 100000.0, message: "Renamed TextField.init(_:text:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    public init(_ titleKey: LocalizedStringKey, text: Binding<String>, onEditingChanged: @escaping (Bool) -> Void, onCommit: @escaping () -> Void)

    @available(iOS, introduced: 13.0, deprecated: 100000.0, message: "Renamed TextField.init(_:text:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Renamed TextField.init(_:text:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "Renamed TextField.init(_:text:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    @available(watchOS, introduced: 6.0, deprecated: 100000.0, message: "Renamed TextField.init(_:text:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    public init(_ titleKey: LocalizedStringKey, text: Binding<String>, onEditingChanged: @escaping (Bool) -> Void)

    @available(iOS, introduced: 13.0, deprecated: 100000.0, message: "Renamed TextField.init(_:text:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Renamed TextField.init(_:text:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "Renamed TextField.init(_:text:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    @available(watchOS, introduced: 6.0, deprecated: 100000.0, message: "Renamed TextField.init(_:text:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    public init(_ titleKey: LocalizedStringKey, text: Binding<String>, onCommit: @escaping () -> Void)

    @available(iOS, introduced: 13.0, deprecated: 100000.0, message: "Renamed TextField.init(_:text:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Renamed TextField.init(_:text:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "Renamed TextField.init(_:text:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    @available(watchOS, introduced: 6.0, deprecated: 100000.0, message: "Renamed TextField.init(_:text:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    public init<S>(_ title: S, text: Binding<String>, onEditingChanged: @escaping (Bool) -> Void, onCommit: @escaping () -> Void) where S : StringProtocol

    @available(iOS, introduced: 13.0, deprecated: 100000.0, message: "Renamed TextField.init(_:text:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Renamed TextField.init(_:text:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "Renamed TextField.init(_:text:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    @available(watchOS, introduced: 6.0, deprecated: 100000.0, message: "Renamed TextField.init(_:text:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    public init<S>(_ title: S, text: Binding<String>, onEditingChanged: @escaping (Bool) -> Void) where S : StringProtocol

    @available(iOS, introduced: 13.0, deprecated: 100000.0, message: "Renamed TextField.init(_:text:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Renamed TextField.init(_:text:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "Renamed TextField.init(_:text:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    @available(watchOS, introduced: 6.0, deprecated: 100000.0, message: "Renamed TextField.init(_:text:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    public init<S>(_ title: S, text: Binding<String>, onCommit: @escaping () -> Void) where S : StringProtocol
}

extension TextField where Label == Text {

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public init<F>(_ titleKey: LocalizedStringKey, value: Binding<F.FormatInput?>, format: F, prompt: Text? = nil) where F : ParseableFormatStyle, F.FormatOutput == String

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public init<S, F>(_ title: S, value: Binding<F.FormatInput?>, format: F, prompt: Text? = nil) where S : StringProtocol, F : ParseableFormatStyle, F.FormatOutput == String

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public init<F>(_ titleKey: LocalizedStringKey, value: Binding<F.FormatInput>, format: F, prompt: Text? = nil) where F : ParseableFormatStyle, F.FormatOutput == String

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public init<S, F>(_ title: S, value: Binding<F.FormatInput>, format: F, prompt: Text? = nil) where S : StringProtocol, F : ParseableFormatStyle, F.FormatOutput == String
}

extension TextField {

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public init<F>(value: Binding<F.FormatInput?>, format: F, prompt: Text? = nil, @ViewBuilder label: () -> Label) where F : ParseableFormatStyle, F.FormatOutput == String

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public init<F>(value: Binding<F.FormatInput>, format: F, prompt: Text? = nil, @ViewBuilder label: () -> Label) where F : ParseableFormatStyle, F.FormatOutput == String
}

extension TextField where Label == Text {

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public init<V>(_ titleKey: LocalizedStringKey, value: Binding<V>, formatter: Formatter, prompt: Text?)

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public init<S, V>(_ title: S, value: Binding<V>, formatter: Formatter, prompt: Text?) where S : StringProtocol
}

extension TextField {

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public init<V>(value: Binding<V>, formatter: Formatter, prompt: Text? = nil, @ViewBuilder label: () -> Label)
}

extension TextField where Label == Text {

    @available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
    public init<V>(_ titleKey: LocalizedStringKey, value: Binding<V>, formatter: Formatter)

    @available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
    public init<S, V>(_ title: S, value: Binding<V>, formatter: Formatter) where S : StringProtocol
}

extension TextField where Label == Text {

    @available(iOS, introduced: 13.0, deprecated: 100000.0, message: "Renamed TextField.init(_:value:formatter:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Renamed TextField.init(_:value:formatter:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "Renamed TextField.init(_:value:formatter:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    @available(watchOS, introduced: 6.0, deprecated: 100000.0, message: "Renamed TextField.init(_:value:formatter:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    public init<V>(_ titleKey: LocalizedStringKey, value: Binding<V>, formatter: Formatter, onEditingChanged: @escaping (Bool) -> Void, onCommit: @escaping () -> Void)

    @available(iOS, introduced: 13.0, deprecated: 100000.0, message: "Renamed TextField.init(_:value:formatter:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Renamed TextField.init(_:value:formatter:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "Renamed TextField.init(_:value:formatter:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    @available(watchOS, introduced: 6.0, deprecated: 100000.0, message: "Renamed TextField.init(_:value:formatter:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    public init<V>(_ titleKey: LocalizedStringKey, value: Binding<V>, formatter: Formatter, onEditingChanged: @escaping (Bool) -> Void)

    @available(iOS, introduced: 13.0, deprecated: 100000.0, message: "Renamed TextField.init(_:value:formatter:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Renamed TextField.init(_:value:formatter:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "Renamed TextField.init(_:value:formatter:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    @available(watchOS, introduced: 6.0, deprecated: 100000.0, message: "Renamed TextField.init(_:value:formatter:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    public init<V>(_ titleKey: LocalizedStringKey, value: Binding<V>, formatter: Formatter, onCommit: @escaping () -> Void)

    @available(iOS, introduced: 13.0, deprecated: 100000.0, message: "Renamed TextField.init(_:value:formatter:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Renamed TextField.init(_:value:formatter:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "Renamed TextField.init(_:value:formatter:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    @available(watchOS, introduced: 6.0, deprecated: 100000.0, message: "Renamed TextField.init(_:value:formatter:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    public init<S, V>(_ title: S, value: Binding<V>, formatter: Formatter, onEditingChanged: @escaping (Bool) -> Void, onCommit: @escaping () -> Void) where S : StringProtocol

    @available(iOS, introduced: 13.0, deprecated: 100000.0, message: "Renamed TextField.init(_:value:formatter:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Renamed TextField.init(_:value:formatter:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "Renamed TextField.init(_:value:formatter:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    @available(watchOS, introduced: 6.0, deprecated: 100000.0, message: "Renamed TextField.init(_:value:formatter:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    public init<S, V>(_ title: S, value: Binding<V>, formatter: Formatter, onEditingChanged: @escaping (Bool) -> Void) where S : StringProtocol

    @available(iOS, introduced: 13.0, deprecated: 100000.0, message: "Renamed TextField.init(_:value:formatter:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Renamed TextField.init(_:value:formatter:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "Renamed TextField.init(_:value:formatter:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    @available(watchOS, introduced: 6.0, deprecated: 100000.0, message: "Renamed TextField.init(_:value:formatter:onEditingChanged:). Use View.onSubmit(of:_:) for functionality previously provided by the onCommit parameter. Use FocusState<T> and View.focused(_:equals:) for functionality previously provided by the onEditingChanged parameter.")
    public init<S, V>(_ title: S, value: Binding<V>, formatter: Formatter, onCommit: @escaping () -> Void) where S : StringProtocol
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public protocol TextFieldStyle {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension TextFieldStyle where Self == DefaultTextFieldStyle {

    public static var automatic: DefaultTextFieldStyle { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension TextFieldStyle where Self == PlainTextFieldStyle {

    public static var plain: PlainTextFieldStyle { get }
}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension TextFieldStyle where Self == SquareBorderTextFieldStyle {

    public static var squareBorder: SquareBorderTextFieldStyle { get }
}

@available(iOS 13.0, macOS 10.15, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension TextFieldStyle where Self == RoundedBorderTextFieldStyle {

    public static var roundedBorder: RoundedBorderTextFieldStyle { get }
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct TextFormattingCommands : Commands {

    public init()

    public var body: some Commands { get }

    public typealias Body = some Commands
}

@available(iOS 15.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public protocol TextSelectability {

    static var allowsSelection: Bool { get }
}

@available(iOS 15.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension TextSelectability where Self == EnabledTextSelectability {

    public static var enabled: EnabledTextSelectability { get }
}

@available(iOS 15.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension TextSelectability where Self == DisabledTextSelectability {

    public static var disabled: DisabledTextSelectability { get }
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
public protocol TimelineSchedule {

    typealias Mode = TimelineScheduleMode

    associatedtype Entries : Sequence where Self.Entries.Element == Date

    func entries(from startDate: Date, mode: Self.Mode) -> Self.Entries
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension TimelineSchedule where Self == AnimationTimelineSchedule {

    public static var animation: AnimationTimelineSchedule { get }

    public static func animation(minimumInterval: Double? = nil, paused: Bool = false) -> AnimationTimelineSchedule
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension TimelineSchedule where Self == PeriodicTimelineSchedule {

    public static func periodic(from startDate: Date, by interval: TimeInterval) -> PeriodicTimelineSchedule
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension TimelineSchedule where Self == EveryMinuteTimelineSchedule {

    public static var everyMinute: EveryMinuteTimelineSchedule { get }
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension TimelineSchedule {

    public static func explicit<S>(_ dates: S) -> ExplicitTimelineSchedule<S> where Self == ExplicitTimelineSchedule<S>, S : Sequence, S.Element == Date
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
public enum TimelineScheduleMode {

    case normal

    case lowFrequency

    public static func == (a: TimelineScheduleMode, b: TimelineScheduleMode) -> Bool

    public func hash(into hasher: inout Hasher)

    public var hashValue: Int { get }
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension TimelineScheduleMode : Equatable {
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension TimelineScheduleMode : Hashable {
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
public struct TimelineView<Schedule, Content> where Schedule : TimelineSchedule {

    public struct Context {

                                                                    public enum Cadence : Comparable {

                    case live

                    case seconds

                    case minutes

                                                                            public static func == (a: TimelineView<Schedule, Content>.Context.Cadence, b: TimelineView<Schedule, Content>.Context.Cadence) -> Bool

                                                                                                                    public func hash(into hasher: inout Hasher)

                                                                                            public static func < (a: TimelineView<Schedule, Content>.Context.Cadence, b: TimelineView<Schedule, Content>.Context.Cadence) -> Bool

                                                                    public var hashValue: Int { get }
        }

                                            public let date: Date

                                                                    public let cadence: TimelineView<Schedule, Content>.Context.Cadence
    }
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension TimelineView : View where Content : View {

    public typealias Body = Never

    public init(_ schedule: Schedule, @ViewBuilder content: @escaping (TimelineView<Schedule, Content>.Context) -> Content)
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension TimelineView.Context.Cadence : Hashable {
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
public struct TintShapeStyle : ShapeStyle {

    public init()
}

@available(iOS 14.5, macOS 11.3, tvOS 14.5, watchOS 7.4, *)
public struct TitleAndIconLabelStyle : LabelStyle {

    public init()

    public func makeBody(configuration: TitleAndIconLabelStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(macOS 11.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct TitleBarWindowStyle : WindowStyle {

    public init()
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public struct TitleOnlyLabelStyle : LabelStyle {

    public init()

    public func makeBody(configuration: TitleOnlyLabelStyle.Configuration) -> some View


    public typealias Body = some View
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public struct Toggle<Label> : View where Label : View {

    public init(isOn: Binding<Bool>, @ViewBuilder label: () -> Label)

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public init<C>(isOn: C, @ViewBuilder label: () -> Label) where C : RandomAccessCollection, C.Element == Binding<Bool>

    @MainActor public var body: some View { get }

    public typealias Body = some View
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Toggle where Label == ToggleStyleConfiguration.Label {

    @available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
    public init(_ configuration: ToggleStyleConfiguration)
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Toggle where Label == Text {

    public init(_ titleKey: LocalizedStringKey, isOn: Binding<Bool>)

    public init<S>(_ title: S, isOn: Binding<Bool>) where S : StringProtocol

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public init<C>(_ titleKey: LocalizedStringKey, isOn: C) where C : RandomAccessCollection, C.Element == Binding<Bool>

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public init<S, C>(_ title: S, isOn: C) where S : StringProtocol, C : RandomAccessCollection, C.Element == Binding<Bool>
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public protocol ToggleStyle {

    associatedtype Body : View

    @ViewBuilder func makeBody(configuration: Self.Configuration) -> Self.Body

    typealias Configuration = ToggleStyleConfiguration
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ToggleStyle where Self == DefaultToggleStyle {

    public static var automatic: DefaultToggleStyle { get }
}

@available(iOS 15.0, macOS 12.0, watchOS 9.0, *)
@available(tvOS, unavailable)
extension ToggleStyle where Self == ButtonToggleStyle {

    public static var button: ButtonToggleStyle { get }
}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension ToggleStyle where Self == CheckboxToggleStyle {

    public static var checkbox: CheckboxToggleStyle { get }
}

@available(iOS 13.0, macOS 10.15, watchOS 6.0, *)
@available(tvOS, unavailable)
extension ToggleStyle where Self == SwitchToggleStyle {

    public static var `switch`: SwitchToggleStyle { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public struct ToggleStyleConfiguration {

    public struct Label : View {

                        public typealias Body = Never
    }

    public let label: ToggleStyleConfiguration.Label

    @Binding public var isOn: Bool { get nonmutating set }

    public var $isOn: Binding<Bool> { get }

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public var isMixed: Bool
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct ToolbarCommands : Commands {

    public init()

    public var body: some Commands { get }

    public typealias Body = some Commands
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public protocol ToolbarContent {

    associatedtype Body : ToolbarContent

    @ToolbarContentBuilder var body: Self.Body { get }
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
@resultBuilder public struct ToolbarContentBuilder {

    public static func buildBlock<Content>(_ content: Content) -> some ToolbarContent where Content : ToolbarContent


    public static func buildBlock<Content>(_ content: Content) -> some CustomizableToolbarContent where Content : CustomizableToolbarContent

}

extension ToolbarContentBuilder {

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public static func buildIf<Content>(_ content: Content?) -> Content? where Content : ToolbarContent

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public static func buildIf<Content>(_ content: Content?) -> Content? where Content : CustomizableToolbarContent

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public static func buildEither<TrueContent, FalseContent>(first: TrueContent) -> _ConditionalContent<TrueContent, FalseContent> where TrueContent : ToolbarContent, FalseContent : ToolbarContent

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public static func buildEither<TrueContent, FalseContent>(first: TrueContent) -> _ConditionalContent<TrueContent, FalseContent> where TrueContent : CustomizableToolbarContent, FalseContent : CustomizableToolbarContent

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public static func buildEither<TrueContent, FalseContent>(second: FalseContent) -> _ConditionalContent<TrueContent, FalseContent> where TrueContent : ToolbarContent, FalseContent : ToolbarContent

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public static func buildEither<TrueContent, FalseContent>(second: FalseContent) -> _ConditionalContent<TrueContent, FalseContent> where TrueContent : CustomizableToolbarContent, FalseContent : CustomizableToolbarContent

    @available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
    public static func buildLimitedAvailability<Content>(_ content: Content) -> some ToolbarContent where Content : ToolbarContent


    @available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
    public static func buildLimitedAvailability<Content>(_ content: Content) -> some CustomizableToolbarContent where Content : CustomizableToolbarContent

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ToolbarContentBuilder {

    public static func buildBlock<C0, C1>(_ c0: C0, _ c1: C1) -> some ToolbarContent where C0 : ToolbarContent, C1 : ToolbarContent

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ToolbarContentBuilder {

    public static func buildBlock<C0, C1, C2>(_ c0: C0, _ c1: C1, _ c2: C2) -> some ToolbarContent where C0 : ToolbarContent, C1 : ToolbarContent, C2 : ToolbarContent

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ToolbarContentBuilder {

    public static func buildBlock<C0, C1, C2, C3>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3) -> some ToolbarContent where C0 : ToolbarContent, C1 : ToolbarContent, C2 : ToolbarContent, C3 : ToolbarContent

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ToolbarContentBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4) -> some ToolbarContent where C0 : ToolbarContent, C1 : ToolbarContent, C2 : ToolbarContent, C3 : ToolbarContent, C4 : ToolbarContent

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ToolbarContentBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5) -> some ToolbarContent where C0 : ToolbarContent, C1 : ToolbarContent, C2 : ToolbarContent, C3 : ToolbarContent, C4 : ToolbarContent, C5 : ToolbarContent

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ToolbarContentBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6) -> some ToolbarContent where C0 : ToolbarContent, C1 : ToolbarContent, C2 : ToolbarContent, C3 : ToolbarContent, C4 : ToolbarContent, C5 : ToolbarContent, C6 : ToolbarContent

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ToolbarContentBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6, C7>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6, _ c7: C7) -> some ToolbarContent where C0 : ToolbarContent, C1 : ToolbarContent, C2 : ToolbarContent, C3 : ToolbarContent, C4 : ToolbarContent, C5 : ToolbarContent, C6 : ToolbarContent, C7 : ToolbarContent

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ToolbarContentBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6, C7, C8>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6, _ c7: C7, _ c8: C8) -> some ToolbarContent where C0 : ToolbarContent, C1 : ToolbarContent, C2 : ToolbarContent, C3 : ToolbarContent, C4 : ToolbarContent, C5 : ToolbarContent, C6 : ToolbarContent, C7 : ToolbarContent, C8 : ToolbarContent

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ToolbarContentBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6, C7, C8, C9>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6, _ c7: C7, _ c8: C8, _ c9: C9) -> some ToolbarContent where C0 : ToolbarContent, C1 : ToolbarContent, C2 : ToolbarContent, C3 : ToolbarContent, C4 : ToolbarContent, C5 : ToolbarContent, C6 : ToolbarContent, C7 : ToolbarContent, C8 : ToolbarContent, C9 : ToolbarContent

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ToolbarContentBuilder {

    public static func buildBlock<C0, C1>(_ c0: C0, _ c1: C1) -> some CustomizableToolbarContent where C0 : CustomizableToolbarContent, C1 : CustomizableToolbarContent

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ToolbarContentBuilder {

    public static func buildBlock<C0, C1, C2>(_ c0: C0, _ c1: C1, _ c2: C2) -> some CustomizableToolbarContent where C0 : CustomizableToolbarContent, C1 : CustomizableToolbarContent, C2 : CustomizableToolbarContent

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ToolbarContentBuilder {

    public static func buildBlock<C0, C1, C2, C3>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3) -> some CustomizableToolbarContent where C0 : CustomizableToolbarContent, C1 : CustomizableToolbarContent, C2 : CustomizableToolbarContent, C3 : CustomizableToolbarContent

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ToolbarContentBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4) -> some CustomizableToolbarContent where C0 : CustomizableToolbarContent, C1 : CustomizableToolbarContent, C2 : CustomizableToolbarContent, C3 : CustomizableToolbarContent, C4 : CustomizableToolbarContent

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ToolbarContentBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5) -> some CustomizableToolbarContent where C0 : CustomizableToolbarContent, C1 : CustomizableToolbarContent, C2 : CustomizableToolbarContent, C3 : CustomizableToolbarContent, C4 : CustomizableToolbarContent, C5 : CustomizableToolbarContent

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ToolbarContentBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6) -> some CustomizableToolbarContent where C0 : CustomizableToolbarContent, C1 : CustomizableToolbarContent, C2 : CustomizableToolbarContent, C3 : CustomizableToolbarContent, C4 : CustomizableToolbarContent, C5 : CustomizableToolbarContent, C6 : CustomizableToolbarContent

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ToolbarContentBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6, C7>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6, _ c7: C7) -> some CustomizableToolbarContent where C0 : CustomizableToolbarContent, C1 : CustomizableToolbarContent, C2 : CustomizableToolbarContent, C3 : CustomizableToolbarContent, C4 : CustomizableToolbarContent, C5 : CustomizableToolbarContent, C6 : CustomizableToolbarContent, C7 : CustomizableToolbarContent

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ToolbarContentBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6, C7, C8>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6, _ c7: C7, _ c8: C8) -> some CustomizableToolbarContent where C0 : CustomizableToolbarContent, C1 : CustomizableToolbarContent, C2 : CustomizableToolbarContent, C3 : CustomizableToolbarContent, C4 : CustomizableToolbarContent, C5 : CustomizableToolbarContent, C6 : CustomizableToolbarContent, C7 : CustomizableToolbarContent, C8 : CustomizableToolbarContent

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ToolbarContentBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6, C7, C8, C9>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6, _ c7: C7, _ c8: C8, _ c9: C9) -> some CustomizableToolbarContent where C0 : CustomizableToolbarContent, C1 : CustomizableToolbarContent, C2 : CustomizableToolbarContent, C3 : CustomizableToolbarContent, C4 : CustomizableToolbarContent, C5 : CustomizableToolbarContent, C6 : CustomizableToolbarContent, C7 : CustomizableToolbarContent, C8 : CustomizableToolbarContent, C9 : CustomizableToolbarContent

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public struct ToolbarItem<ID, Content> : ToolbarContent where Content : View {

    public typealias Body = Never
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ToolbarItem where ID == () {

    public init(placement: ToolbarItemPlacement = .automatic, @ViewBuilder content: () -> Content)
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ToolbarItem : CustomizableToolbarContent where ID == String {

    public init(id: String, placement: ToolbarItemPlacement = .automatic, showsByDefault: Bool = true, @ViewBuilder content: () -> Content)
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ToolbarItem : Identifiable where ID : Hashable {

    public var id: ID { get }
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public struct ToolbarItemGroup<Content> : ToolbarContent where Content : View {

    public init(placement: ToolbarItemPlacement = .automatic, @ViewBuilder content: () -> Content)

    public typealias Body = Never
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension ToolbarItemGroup {

    public init<C, L>(placement: ToolbarItemPlacement = .automatic, @ViewBuilder content: () -> C, @ViewBuilder label: () -> L) where Content == LabeledToolbarItemGroupContent<C, L>, C : View, L : View
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public struct ToolbarItemPlacement {

    public static let automatic: ToolbarItemPlacement

    @available(watchOS, unavailable)
    public static let principal: ToolbarItemPlacement

    @available(watchOS, unavailable)
    public static let navigation: ToolbarItemPlacement

    public static let primaryAction: ToolbarItemPlacement

    @available(iOS 16.0, macOS 13.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public static let secondaryAction: ToolbarItemPlacement

    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public static let status: ToolbarItemPlacement

    public static let confirmationAction: ToolbarItemPlacement

    public static let cancellationAction: ToolbarItemPlacement

    public static let destructiveAction: ToolbarItemPlacement

    @available(iOS 15.0, macOS 12.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public static let keyboard: ToolbarItemPlacement
}

@available(macOS 13.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension ToolbarItemPlacement {

    public init<ID>(id: ID) where ID : Hashable
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public struct ToolbarPlacement {

    public static var automatic: ToolbarPlacement { get }

    @available(iOS, unavailable)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public static var windowToolbar: ToolbarPlacement { get }

    @available(iOS, unavailable)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public init<ID>(id: ID) where ID : Hashable
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public struct ToolbarRole {

    public static var automatic: ToolbarRole { get }

    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public static var editor: ToolbarRole { get }
}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct TouchBar<Content> where Content : View {

    public init(@ViewBuilder content: () -> Content)

    public init(id: String, @ViewBuilder content: () -> Content)
}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public enum TouchBarItemPresence {

    case required(String)

    case `default`(String)

    case optional(String)
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct Transaction {

    @inlinable public init()
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Transaction {

    public var isContinuous: Bool
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Transaction {

    public init(animation: Animation?)

    public var animation: Animation?

    public var disablesAnimations: Bool
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct TransformedShape<Content> : Shape where Content : Shape {

    public var shape: Content

    public var transform: CGAffineTransform

    @inlinable public init(shape: Content, transform: CGAffineTransform)

    public func path(in rect: CGRect) -> Path

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public static var role: ShapeRole { get }

    public typealias AnimatableData = Content.AnimatableData

    public var animatableData: TransformedShape<Content>.AnimatableData

    public typealias Body
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
@frozen public struct TupleTableColumnContent<RowValue, Sort, T> : TableColumnContent where RowValue : Identifiable, Sort : SortComparator {

    public typealias TableRowValue = RowValue

    public typealias TableColumnSortComparator = Sort

    public var value: T

    public typealias TableColumnBody = Never
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
@frozen public struct TupleTableRowContent<Value, T> : TableRowContent where Value : Identifiable {

    public typealias TableRowValue = Value

    public var value: T

    public typealias TableRowBody = Never
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct TupleView<T> : View {

    public var value: T

    @inlinable public init(_ value: T)

    public typealias Body = Never
}

@available(macOS 11.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct UnifiedCompactWindowToolbarStyle : WindowToolbarStyle {

    public init()

    public init(showsTitle: Bool)
}

@available(macOS 11.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct UnifiedWindowToolbarStyle : WindowToolbarStyle {

    public init()

    public init(showsTitle: Bool)
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct UnitPoint : Hashable {

    public var x: CGFloat

    public var y: CGFloat

    @inlinable public init()

    @inlinable public init(x: CGFloat, y: CGFloat)

    public static let zero: UnitPoint

    public static let center: UnitPoint

    public static let leading: UnitPoint

    public static let trailing: UnitPoint

    public static let top: UnitPoint

    public static let bottom: UnitPoint

    public static let topLeading: UnitPoint

    public static let topTrailing: UnitPoint

    public static let bottomLeading: UnitPoint

    public static let bottomTrailing: UnitPoint

    public func hash(into hasher: inout Hasher)

    public static func == (a: UnitPoint, b: UnitPoint) -> Bool

    public var hashValue: Int { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension UnitPoint : Animatable {

    public typealias AnimatableData = AnimatablePair<CGFloat, CGFloat>

    public var animatableData: UnitPoint.AnimatableData
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension UnitPoint : Sendable {
}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct VSplitView<Content> : View where Content : View {

    public init(@ViewBuilder content: () -> Content)

    public typealias Body = Never
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct VStack<Content> : View where Content : View {

    @inlinable public init(alignment: HorizontalAlignment = .center, spacing: CGFloat? = nil, @ViewBuilder content: () -> Content)

    public typealias Body = Never
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension VStack : Animatable where Content == EmptyView {

    public typealias AnimatableData = EmptyAnimatableData
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension VStack : Layout where Content == EmptyView {

    public typealias Cache

    public init(alignment: HorizontalAlignment = .center, spacing: CGFloat? = nil)
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public protocol VectorArithmetic : AdditiveArithmetic {

    mutating func scale(by rhs: Double)

    var magnitudeSquared: Double { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct VerticalAlignment : Equatable {

    public init(_ id: AlignmentID.Type)

    public static func == (a: VerticalAlignment, b: VerticalAlignment) -> Bool
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension VerticalAlignment {

    public func combineExplicit<S>(_ values: S) -> CGFloat? where S : Sequence, S.Element == CGFloat?
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension VerticalAlignment {

    public static let top: VerticalAlignment

    public static let center: VerticalAlignment

    public static let bottom: VerticalAlignment

    public static let firstTextBaseline: VerticalAlignment

    public static let lastTextBaseline: VerticalAlignment
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension VerticalAlignment : Sendable {
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
@frozen public enum VerticalEdge : Int8, CaseIterable, Codable {

    case top

    case bottom

    @frozen public struct Set : OptionSet {

                        public typealias Element = VerticalEdge.Set

                                                                    public let rawValue: Int8

                                                                        public init(rawValue: Int8)

            public static let top: VerticalEdge.Set

            public static let bottom: VerticalEdge.Set

            public static let all: VerticalEdge.Set

            public init(_ e: VerticalEdge)

            public typealias ArrayLiteralElement = VerticalEdge.Set.Element

                                public typealias RawValue = Int8
    }

    public init?(rawValue: Int8)

    public typealias AllCases = [VerticalEdge]

    public typealias RawValue = Int8

    public static var allCases: [VerticalEdge] { get }

    public var rawValue: Int8 { get }
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension VerticalEdge : Equatable {
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension VerticalEdge : Hashable {
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension VerticalEdge : RawRepresentable {
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension VerticalEdge : Sendable {
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension VerticalEdge.Set : Sendable {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public protocol View {

    associatedtype Body : View

    @ViewBuilder @MainActor var body: Self.Body { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @available(iOS, introduced: 13.0, deprecated: 100000.0, message: "Use the asset catalog's accent color or View.tint(_:) instead.")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Use the asset catalog's accent color or View.tint(_:) instead.")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "Use the asset catalog's accent color or View.tint(_:) instead.")
    @available(watchOS, introduced: 6.0, deprecated: 100000.0, message: "Use the asset catalog's accent color or View.tint(_:) instead.")
    @inlinable public func accentColor(_ accentColor: Color?) -> some View

}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension View {

    @inlinable public func overlayPreferenceValue<K, V>(_ key: K.Type, alignment: Alignment = .center, @ViewBuilder _ transform: @escaping (K.Value) -> V) -> some View where K : PreferenceKey, V : View


    @inlinable public func backgroundPreferenceValue<K, V>(_ key: K.Type, alignment: Alignment = .center, @ViewBuilder _ transform: @escaping (K.Value) -> V) -> some View where K : PreferenceKey, V : View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func overlayPreferenceValue<Key, T>(_ key: Key.Type = Key.self, @ViewBuilder _ transform: @escaping (Key.Value) -> T) -> some View where Key : PreferenceKey, T : View


    @inlinable public func backgroundPreferenceValue<Key, T>(_ key: Key.Type = Key.self, @ViewBuilder _ transform: @escaping (Key.Value) -> T) -> some View where Key : PreferenceKey, T : View

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension View {

    public func userActivity(_ activityType: String, isActive: Bool = true, _ update: @escaping (NSUserActivity) -> ()) -> some View


    public func userActivity<P>(_ activityType: String, element: P?, _ update: @escaping (P, NSUserActivity) -> ()) -> some View


    public func onContinueUserActivity(_ activityType: String, perform action: @escaping (NSUserActivity) -> ()) -> some View


    public func onOpenURL(perform action: @escaping (URL) -> ()) -> some View

}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension View {

    public func handlesExternalEvents(preferring: Set<String>, allowing: Set<String>) -> some View

}

@available(iOS 16.0, macOS 13.0, watchOS 7.0, *)
@available(tvOS, unavailable)
extension View {

    public func gaugeStyle<S>(_ style: S) -> some View where S : GaugeStyle

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func deleteDisabled(_ isDisabled: Bool) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    public func buttonStyle<S>(_ style: S) -> some View where S : PrimitiveButtonStyle

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    public func buttonStyle<S>(_ style: S) -> some View where S : ButtonStyle

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension View {

    public func defaultAppStorage(_ store: UserDefaults) -> some View

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension View {

    public func help(_ textKey: LocalizedStringKey) -> some View


    public func help(_ text: Text) -> some View


    public func help<S>(_ text: S) -> some View where S : StringProtocol

}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension View {

    public func presentationDetents(_ detents: Set<PresentationDetent>) -> some View


    public func presentationDetents(_ detents: Set<PresentationDetent>, selection: Binding<PresentationDetent>) -> some View


    public func presentationDragIndicator(_ visibility: Visibility) -> some View

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension View {

    public func labelStyle<S>(_ style: S) -> some View where S : LabelStyle

}

extension View {

    @available(iOS 16.0, macOS 13.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func searchable<C, T>(text: Binding<String>, tokens: Binding<C>, placement: SearchFieldPlacement = .automatic, prompt: Text? = nil, @ViewBuilder token: @escaping (C.Element) -> T) -> some View where C : RandomAccessCollection, C : RangeReplaceableCollection, T : View, C.Element : Identifiable


    @available(iOS 16.0, macOS 13.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func searchable<C, T>(text: Binding<String>, tokens: Binding<C>, placement: SearchFieldPlacement = .automatic, prompt: LocalizedStringKey, @ViewBuilder token: @escaping (C.Element) -> T) -> some View where C : RandomAccessCollection, C : RangeReplaceableCollection, T : View, C.Element : Identifiable


    @available(iOS 16.0, macOS 13.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func searchable<C, T, S>(text: Binding<String>, tokens: Binding<C>, placement: SearchFieldPlacement = .automatic, prompt: S, @ViewBuilder token: @escaping (C.Element) -> T) -> some View where C : RandomAccessCollection, C : RangeReplaceableCollection, T : View, S : StringProtocol, C.Element : Identifiable

}

extension View {

    @available(iOS 16.0, macOS 13.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func searchable<C, T, S>(text: Binding<String>, tokens: Binding<C>, placement: SearchFieldPlacement = .automatic, prompt: Text? = nil, @ViewBuilder token: @escaping (C.Element) -> T, @ViewBuilder suggestions: () -> S) -> some View where C : RandomAccessCollection, C : RangeReplaceableCollection, T : View, S : View, C.Element : Identifiable


    @available(iOS 16.0, macOS 13.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func searchable<C, T, S>(text: Binding<String>, tokens: Binding<C>, placement: SearchFieldPlacement = .automatic, prompt: LocalizedStringKey, @ViewBuilder token: @escaping (C.Element) -> T, @ViewBuilder suggestions: () -> S) -> some View where C : RandomAccessCollection, C : RangeReplaceableCollection, T : View, S : View, C.Element : Identifiable


    @available(iOS 16.0, macOS 13.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func searchable<C, T, V, S>(text: Binding<String>, tokens: Binding<C>, placement: SearchFieldPlacement = .automatic, prompt: S, @ViewBuilder token: @escaping (C.Element) -> T, @ViewBuilder suggestions: () -> V) -> some View where C : RandomAccessCollection, C : RangeReplaceableCollection, T : View, V : View, S : StringProtocol, C.Element : Identifiable

}

extension View {

    @available(iOS 16.0, macOS 13.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func searchable<C, T>(text: Binding<String>, tokens: Binding<C>, suggestedTokens: Binding<C>, placement: SearchFieldPlacement = .automatic, prompt: Text? = nil, @ViewBuilder token: @escaping (C.Element) -> T) -> some View where C : MutableCollection, C : RandomAccessCollection, C : RangeReplaceableCollection, T : View, C.Element : Identifiable


    @available(iOS 16.0, macOS 13.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func searchable<C, T>(text: Binding<String>, tokens: Binding<C>, suggestedTokens: Binding<C>, placement: SearchFieldPlacement = .automatic, prompt: LocalizedStringKey, @ViewBuilder token: @escaping (C.Element) -> T) -> some View where C : MutableCollection, C : RandomAccessCollection, C : RangeReplaceableCollection, T : View, C.Element : Identifiable


    @available(iOS 16.0, macOS 13.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func searchable<C, T, S>(text: Binding<String>, tokens: Binding<C>, suggestedTokens: Binding<C>, placement: SearchFieldPlacement = .automatic, prompt: S, @ViewBuilder token: @escaping (C.Element) -> T) -> some View where C : MutableCollection, C : RandomAccessCollection, C : RangeReplaceableCollection, T : View, S : StringProtocol, C.Element : Identifiable

}

extension View {

    @available(iOS 16.0, macOS 13.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func searchable<C, T, D, V>(text: Binding<String>, tokens: Binding<C>, scope: Binding<D>, placement: SearchFieldPlacement = .automatic, prompt: Text? = nil, @ViewBuilder token: @escaping (C.Element) -> T, @ViewBuilder scopes: () -> V) -> some View where C : RandomAccessCollection, C : RangeReplaceableCollection, T : View, D : Hashable, V : View, C.Element : Identifiable


    @available(iOS 16.0, macOS 13.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func searchable<C, T, D, V>(text: Binding<String>, tokens: Binding<C>, scope: Binding<D>, placement: SearchFieldPlacement = .automatic, prompt: LocalizedStringKey, @ViewBuilder token: @escaping (C.Element) -> T, @ViewBuilder scopes: () -> V) -> some View where C : RandomAccessCollection, C : RangeReplaceableCollection, T : View, D : Hashable, V : View, C.Element : Identifiable


    @available(iOS 16.0, macOS 13.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func searchable<C, T, D, V, S>(text: Binding<String>, tokens: Binding<C>, scope: Binding<D>, placement: SearchFieldPlacement = .automatic, prompt: S, @ViewBuilder token: @escaping (C.Element) -> T, @ViewBuilder scopes: () -> V) -> some View where C : RandomAccessCollection, C : RangeReplaceableCollection, T : View, D : Hashable, V : View, S : StringProtocol, C.Element : Identifiable

}

extension View {

    @available(iOS 16.0, macOS 13.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func searchable<C, T, D, V1, V2>(text: Binding<String>, tokens: Binding<C>, scope: Binding<D>, placement: SearchFieldPlacement = .automatic, prompt: Text? = nil, @ViewBuilder token: @escaping (C.Element) -> T, @ViewBuilder scopes: () -> V1, @ViewBuilder suggestions: () -> V2) -> some View where C : RandomAccessCollection, C : RangeReplaceableCollection, T : View, D : Hashable, V1 : View, V2 : View, C.Element : Identifiable


    @available(iOS 16.0, macOS 13.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func searchable<C, T, D, V1, V2>(text: Binding<String>, tokens: Binding<C>, scope: Binding<D>, placement: SearchFieldPlacement = .automatic, prompt: LocalizedStringKey, @ViewBuilder token: @escaping (C.Element) -> T, @ViewBuilder scopes: () -> V1, @ViewBuilder suggestions: () -> V2) -> some View where C : RandomAccessCollection, C : RangeReplaceableCollection, T : View, D : Hashable, V1 : View, V2 : View, C.Element : Identifiable


    @available(iOS 16.0, macOS 13.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func searchable<C, T, D, V1, V2, S>(text: Binding<String>, tokens: Binding<C>, scope: Binding<D>, placement: SearchFieldPlacement = .automatic, prompt: S, @ViewBuilder token: @escaping (C.Element) -> T, @ViewBuilder scopes: () -> V1, @ViewBuilder suggestions: () -> V2) -> some View where C : RandomAccessCollection, C : RangeReplaceableCollection, T : View, D : Hashable, V1 : View, V2 : View, S : StringProtocol, C.Element : Identifiable

}

@available(iOS 13.0, macOS 10.15, tvOS 14.0, *)
@available(watchOS, introduced: 6.0, deprecated: 7.0)
extension View {

    public func contextMenu<MenuItems>(@ViewBuilder menuItems: () -> MenuItems) -> some View where MenuItems : View

}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, *)
@available(watchOS, unavailable)
extension View {

    public func contextMenu<M, P>(@ViewBuilder menuItems: () -> M, @ViewBuilder preview: () -> P) -> some View where M : View, P : View

}

@available(iOS, introduced: 13.0, deprecated: 100000.0, message: "Use `contextMenu(menuItems:)` instead.")
@available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Use `contextMenu(menuItems:)` instead.")
@available(tvOS, unavailable)
@available(watchOS, introduced: 6.0, deprecated: 7.0)
extension View {

    public func contextMenu<MenuItems>(_ contextMenu: ContextMenu<MenuItems>?) -> some View where MenuItems : View

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    @inlinable public func foregroundStyle<S>(_ style: S) -> some View where S : ShapeStyle


    @inlinable public func foregroundStyle<S1, S2>(_ primary: S1, _ secondary: S2) -> some View where S1 : ShapeStyle, S2 : ShapeStyle


    @inlinable public func foregroundStyle<S1, S2, S3>(_ primary: S1, _ secondary: S2, _ tertiary: S3) -> some View where S1 : ShapeStyle, S2 : ShapeStyle, S3 : ShapeStyle

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func transaction(_ transform: @escaping (inout Transaction) -> Void) -> some View


    @available(iOS, introduced: 13.0, deprecated: 15.0, message: "Use withAnimation or animation(_:value:) instead.")
    @available(macOS, introduced: 10.15, deprecated: 12.0, message: "Use withAnimation or animation(_:value:) instead.")
    @available(tvOS, introduced: 13.0, deprecated: 15.0, message: "Use withAnimation or animation(_:value:) instead.")
    @available(watchOS, introduced: 6.0, deprecated: 8.0, message: "Use withAnimation or animation(_:value:) instead.")
    @inlinable public func animation(_ animation: Animation?) -> some View

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    public func searchable(text: Binding<String>, placement: SearchFieldPlacement = .automatic, prompt: Text? = nil) -> some View


    public func searchable(text: Binding<String>, placement: SearchFieldPlacement = .automatic, prompt: LocalizedStringKey) -> some View


    public func searchable<S>(text: Binding<String>, placement: SearchFieldPlacement = .automatic, prompt: S) -> some View where S : StringProtocol

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    @inlinable public func mask<Mask>(alignment: Alignment = .center, @ViewBuilder _ mask: () -> Mask) -> some View where Mask : View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @available(iOS, deprecated: 100000.0, message: "Use overload where mask accepts a @ViewBuilder instead.")
    @available(macOS, deprecated: 100000.0, message: "Use overload where mask accepts a @ViewBuilder instead.")
    @available(tvOS, deprecated: 100000.0, message: "Use overload where mask accepts a @ViewBuilder instead.")
    @available(watchOS, deprecated: 100000.0, message: "Use overload where mask accepts a @ViewBuilder instead.")
    @inlinable public func mask<Mask>(_ mask: Mask) -> some View where Mask : View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func environment<V>(_ keyPath: WritableKeyPath<EnvironmentValues, V>, _ value: V) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 7.0, *)
extension View {

    @available(iOS, introduced: 13.0, deprecated: 100000.0, message: "replace styled NavigationView with NavigationStack or NavigationSplitView instead")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, message: "replace styled NavigationView with NavigationStack or NavigationSplitView instead")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "replace styled NavigationView with NavigationStack or NavigationSplitView instead")
    @available(watchOS, introduced: 7.0, deprecated: 100000.0, message: "replace styled NavigationView with NavigationStack or NavigationSplitView instead")
    public func navigationViewStyle<S>(_ style: S) -> some View where S : NavigationViewStyle

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    public func accessibilityChartDescriptor<R>(_ representable: R) -> some View where R : AXChartDescriptorRepresentable

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    public func accessibilityRotor<Content>(_ label: Text, @AccessibilityRotorContentBuilder entries: @escaping () -> Content) -> some View where Content : AccessibilityRotorContent


    public func accessibilityRotor<Content>(_ systemRotor: AccessibilitySystemRotor, @AccessibilityRotorContentBuilder entries: @escaping () -> Content) -> some View where Content : AccessibilityRotorContent


    public func accessibilityRotor<EntryModel>(_ rotorLabel: Text, entries: [EntryModel], entryLabel: KeyPath<EntryModel, String>) -> some View where EntryModel : Identifiable


    public func accessibilityRotor<EntryModel, ID>(_ rotorLabel: Text, entries: [EntryModel], entryID: KeyPath<EntryModel, ID>, entryLabel: KeyPath<EntryModel, String>) -> some View where ID : Hashable


    public func accessibilityRotor<EntryModel>(_ systemRotor: AccessibilitySystemRotor, entries: [EntryModel], entryLabel: KeyPath<EntryModel, String>) -> some View where EntryModel : Identifiable


    public func accessibilityRotor<EntryModel, ID>(_ systemRotor: AccessibilitySystemRotor, entries: [EntryModel], entryID: KeyPath<EntryModel, ID>, entryLabel: KeyPath<EntryModel, String>) -> some View where ID : Hashable


    public func accessibilityRotor(_ label: Text, textRanges: [Range<String.Index>]) -> some View


    public func accessibilityRotor(_ systemRotor: AccessibilitySystemRotor, textRanges: [Range<String.Index>]) -> some View

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    public func accessibilityRotor<Content>(_ labelKey: LocalizedStringKey, @AccessibilityRotorContentBuilder entries: @escaping () -> Content) -> some View where Content : AccessibilityRotorContent


    public func accessibilityRotor<L, Content>(_ label: L, @AccessibilityRotorContentBuilder entries: @escaping () -> Content) -> some View where L : StringProtocol, Content : AccessibilityRotorContent


    public func accessibilityRotor<EntryModel>(_ rotorLabelKey: LocalizedStringKey, entries: [EntryModel], entryLabel: KeyPath<EntryModel, String>) -> some View where EntryModel : Identifiable


    public func accessibilityRotor<L, EntryModel>(_ rotorLabel: L, entries: [EntryModel], entryLabel: KeyPath<EntryModel, String>) -> some View where L : StringProtocol, EntryModel : Identifiable


    public func accessibilityRotor<EntryModel, ID>(_ rotorLabelKey: LocalizedStringKey, entries: [EntryModel], entryID: KeyPath<EntryModel, ID>, entryLabel: KeyPath<EntryModel, String>) -> some View where ID : Hashable


    public func accessibilityRotor<L, EntryModel, ID>(_ rotorLabel: L, entries: [EntryModel], entryID: KeyPath<EntryModel, ID>, entryLabel: KeyPath<EntryModel, String>) -> some View where L : StringProtocol, ID : Hashable


    public func accessibilityRotor(_ labelKey: LocalizedStringKey, textRanges: [Range<String.Index>]) -> some View


    public func accessibilityRotor<L>(_ label: L, textRanges: [Range<String.Index>]) -> some View where L : StringProtocol

}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension View {

    @available(iOS, unavailable)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func touchBar<Content>(_ touchBar: TouchBar<Content>) -> some View where Content : View


    @available(iOS, unavailable)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func touchBar<Content>(@ViewBuilder content: () -> Content) -> some View where Content : View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View where Self : Equatable {

    @inlinable public func equatable() -> EquatableView<Self>
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    @inlinable public func task(priority: TaskPriority = .userInitiated, _ action: @escaping @Sendable () async -> Void) -> some View


    @inlinable public func task<T>(id value: T, priority: TaskPriority = .userInitiated, _ action: @escaping @Sendable () async -> Void) -> some View where T : Equatable

}

@available(iOS 13.0, macOS 10.15, tvOS 16.0, watchOS 6.0, *)
extension View {

    public func onTapGesture(count: Int = 1, perform action: @escaping () -> Void) -> some View

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension View {

    @inlinable public func onChange<V>(of value: V, perform action: @escaping (_ newValue: V) -> Void) -> some View where V : Equatable

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func previewDevice(_ value: PreviewDevice?) -> some View


    @inlinable public func previewLayout(_ value: PreviewLayout) -> some View


    @inlinable public func previewDisplayName(_ value: String?) -> some View


    @available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
    @inlinable public func previewContext<C>(_ value: C) -> some View where C : PreviewContext


    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public func previewInterfaceOrientation(_ value: InterfaceOrientation) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func layoutPriority(_ value: Double) -> some View

}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension View {

    @available(iOS, unavailable)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func onCommand(_ selector: Selector, perform action: (() -> Void)?) -> some View


    @available(macOS 11.0, *)
    @available(iOS, unavailable)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func onPasteCommand(of supportedContentTypes: [UTType], perform payloadAction: @escaping ([NSItemProvider]) -> Void) -> some View


    @available(macOS 11.0, *)
    @available(iOS, unavailable)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func onPasteCommand<Payload>(of supportedContentTypes: [UTType], validator: @escaping ([NSItemProvider]) -> Payload?, perform payloadAction: @escaping (Payload) -> Void) -> some View


    @available(iOS, unavailable)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func onCopyCommand(perform payloadAction: (() -> [NSItemProvider])?) -> some View


    @available(iOS, unavailable)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func onCutCommand(perform payloadAction: (() -> [NSItemProvider])?) -> some View

}

@available(iOS, unavailable)
@available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Provide `UTType`s as the `supportedContentTypes` instead.")
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension View {

    public func onPasteCommand(of supportedTypes: [String], perform payloadAction: @escaping ([NSItemProvider]) -> Void) -> some View


    public func onPasteCommand<Payload>(of supportedTypes: [String], validator: @escaping ([NSItemProvider]) -> Payload?, perform payloadAction: @escaping (Payload) -> Void) -> some View

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    public func interactiveDismissDisabled(_ isDisabled: Bool = true) -> some View

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    public func focused<Value>(_ binding: FocusState<Value>.Binding, equals value: Value) -> some View where Value : Hashable


    public func focused(_ condition: FocusState<Bool>.Binding) -> some View

}

@available(iOS 13.4, macOS 10.15, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension View {

    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func onDrag(_ data: @escaping () -> NSItemProvider) -> some View

}

@available(iOS 15.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension View {

    public func onDrag<V>(_ data: @escaping () -> NSItemProvider, @ViewBuilder preview: () -> V) -> some View where V : View

}

extension View {

    @available(iOS 16.0, macOS 13.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func draggable<T>(_ payload: @autoclosure @escaping () -> T) -> some View where T : Transferable

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func id<ID>(_ id: ID) -> some View where ID : Hashable

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    public func privacySensitive(_ sensitive: Bool = true) -> some View

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension View {

    public func accessibilityLinkedGroup<ID>(id: ID, in namespace: Namespace.ID) -> some View where ID : Hashable


    public func accessibilityLabeledPair<ID>(role: AccessibilityLabeledPairRole, id: ID, in namespace: Namespace.ID) -> some View where ID : Hashable

}

extension View {

    @available(macOS 11.0, *)
    @available(iOS, unavailable)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    @inlinable public func textContentType(_ textContentType: NSTextContentType?) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func onPreferenceChange<K>(_ key: K.Type = K.self, perform action: @escaping (K.Value) -> Void) -> some View where K : PreferenceKey, K.Value : Equatable

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    @inlinable public func containerShape<T>(_ shape: T) -> some View where T : InsettableShape

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func allowsHitTesting(_ enabled: Bool) -> some View

}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension View {

    @inlinable public func layoutValue<K>(key: K.Type, value: K.Value) -> some View where K : LayoutValueKey

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    public func accessibilityRespondsToUserInteraction(_ respondsToUserInteraction: Bool = true) -> ModifiedContent<Self, AccessibilityAttachmentModifier>
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    public func sheet<Item, Content>(item: Binding<Item?>, onDismiss: (() -> Void)? = nil, @ViewBuilder content: @escaping (Item) -> Content) -> some View where Item : Identifiable, Content : View


    public func sheet<Content>(isPresented: Binding<Bool>, onDismiss: (() -> Void)? = nil, @ViewBuilder content: @escaping () -> Content) -> some View where Content : View

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension View {

    public func redacted(reason: RedactionReasons) -> some View


    public func unredacted() -> some View

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    public func headerProminence(_ prominence: Prominence) -> some View

}

extension View {

    @available(iOS, introduced: 13.0, deprecated: 100000.0, renamed: "preferredColorScheme(_:)")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, renamed: "preferredColorScheme(_:)")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, renamed: "preferredColorScheme(_:)")
    @available(watchOS, introduced: 6.0, deprecated: 100000.0, renamed: "preferredColorScheme(_:)")
    @inlinable public func colorScheme(_ colorScheme: ColorScheme) -> some View

}

extension View {

    @available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
    @inlinable public func lineLimit(_ number: Int?) -> some View


    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public func lineLimit(_ limit: PartialRangeFrom<Int>) -> some View


    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public func lineLimit(_ limit: PartialRangeThrough<Int>) -> some View


    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public func lineLimit(_ limit: ClosedRange<Int>) -> some View


    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public func lineLimit(_ limit: Int, reservesSpace: Bool) -> some View

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    public func accessibilityTextContentType(_ value: AccessibilityTextContentType) -> ModifiedContent<Self, AccessibilityAttachmentModifier>

    public func accessibilityHeading(_ level: AccessibilityHeadingLevel) -> ModifiedContent<Self, AccessibilityAttachmentModifier>
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @available(iOS, introduced: 13.0, deprecated: 100000.0, message: "use `alert(title:isPresented:presenting::actions:) instead.")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, message: "use `alert(title:isPresented:presenting::actions:) instead.")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "use `alert(title:isPresented:presenting::actions:) instead.")
    @available(watchOS, introduced: 6.0, deprecated: 100000.0, message: "use `alert(title:isPresented:presenting::actions:) instead.")
    public func alert<Item>(item: Binding<Item?>, content: (Item) -> Alert) -> some View where Item : Identifiable


    @available(iOS, introduced: 13.0, deprecated: 100000.0, message: "use `alert(title:isPresented:presenting::actions:) instead.")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, message: "use `alert(title:isPresented:presenting::actions:) instead.")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "use `alert(title:isPresented:presenting::actions:) instead.")
    @available(watchOS, introduced: 6.0, deprecated: 100000.0, message: "use `alert(title:isPresented:presenting::actions:) instead.")
    public func alert(isPresented: Binding<Bool>, content: () -> Alert) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    public func gesture<T>(_ gesture: T, including mask: GestureMask = .all) -> some View where T : Gesture


    public func highPriorityGesture<T>(_ gesture: T, including mask: GestureMask = .all) -> some View where T : Gesture


    public func simultaneousGesture<T>(_ gesture: T, including mask: GestureMask = .all) -> some View where T : Gesture

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func projectionEffect(_ transform: ProjectionTransform) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @available(iOS, introduced: 13.0, deprecated: 100000.0, message: "Use `background(alignment:content:)` instead.")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Use `background(alignment:content:)` instead.")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "Use `background(alignment:content:)` instead.")
    @available(watchOS, introduced: 6.0, deprecated: 100000.0, message: "Use `background(alignment:content:)` instead.")
    @inlinable public func background<Background>(_ background: Background, alignment: Alignment = .center) -> some View where Background : View

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    @inlinable public func background<V>(alignment: Alignment = .center, @ViewBuilder content: () -> V) -> some View where V : View


    @inlinable public func background(ignoresSafeAreaEdges edges: Edge.Set = .all) -> some View


    @inlinable public func background<S>(_ style: S, ignoresSafeAreaEdges edges: Edge.Set = .all) -> some View where S : ShapeStyle


    @inlinable public func background<S>(in shape: S, fillStyle: FillStyle = FillStyle()) -> some View where S : Shape


    @inlinable public func background<S, T>(_ style: S, in shape: T, fillStyle: FillStyle = FillStyle()) -> some View where S : ShapeStyle, T : Shape


    @inlinable public func background<S>(in shape: S, fillStyle: FillStyle = FillStyle()) -> some View where S : InsettableShape


    @inlinable public func background<S, T>(_ style: S, in shape: T, fillStyle: FillStyle = FillStyle()) -> some View where S : ShapeStyle, T : InsettableShape

}

@available(iOS 16.0, macOS 13.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension View {

    public func contextMenu<I, M>(forSelectionType itemType: I.Type = I.self, @ViewBuilder menu: @escaping (Set<I>) -> M) -> some View where I : Hashable, M : View

}

extension View {

    @available(iOS 16.0, macOS 13.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func contextAction<I>(forSelectionType type: I.Type = I.self, action: @escaping (Set<I>) -> Void) -> some View where I : Hashable

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func modifier<T>(_ modifier: T) -> ModifiedContent<Self, T>
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @available(iOS, introduced: 13.0, deprecated: 100000.0, message: "Use `overlay(alignment:content:)` instead.")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Use `overlay(alignment:content:)` instead.")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "Use `overlay(alignment:content:)` instead.")
    @available(watchOS, introduced: 6.0, deprecated: 100000.0, message: "Use `overlay(alignment:content:)` instead.")
    @inlinable public func overlay<Overlay>(_ overlay: Overlay, alignment: Alignment = .center) -> some View where Overlay : View


    @inlinable public func border<S>(_ content: S, width: CGFloat = 1) -> some View where S : ShapeStyle

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    @inlinable public func overlay<V>(alignment: Alignment = .center, @ViewBuilder content: () -> V) -> some View where V : View


    @inlinable public func overlay<S>(_ style: S, ignoresSafeAreaEdges edges: Edge.Set = .all) -> some View where S : ShapeStyle


    @inlinable public func overlay<S, T>(_ style: S, in shape: T, fillStyle: FillStyle = FillStyle()) -> some View where S : ShapeStyle, T : Shape

}

extension View {

    @available(iOS 16.0, macOS 13.0, watchOS 9.0, tvOS 16.0, *)
    public func navigationDocument<D>(_ document: D) -> some View where D : Transferable


    @available(iOS 16.0, macOS 13.0, watchOS 9.0, *)
    @available(tvOS, unavailable)
    public func navigationDocument<D>(_ document: D, preview: SharePreview<Never, Never>) -> some View where D : Transferable


    @available(iOS 16.0, macOS 13.0, watchOS 9.0, *)
    @available(tvOS, unavailable)
    public func navigationDocument<D, I>(_ document: D, preview: SharePreview<Never, I>) -> some View where D : Transferable, I : Transferable


    @available(iOS 16.0, macOS 13.0, watchOS 9.0, *)
    @available(tvOS, unavailable)
    public func navigationDocument<D, I>(_ document: D, preview: SharePreview<I, Never>) -> some View where D : Transferable, I : Transferable


    @available(iOS 16.0, macOS 13.0, watchOS 9.0, *)
    @available(tvOS, unavailable)
    public func navigationDocument<D, I1, I2>(_ document: D, preview: SharePreview<I1, I2>) -> some View where D : Transferable, I1 : Transferable, I2 : Transferable

}

extension View {

    @available(iOS 16.0, macOS 13.0, watchOS 9.0, tvOS 16.0, *)
    public func navigationDocument(_ url: URL) -> some View

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    public func submitLabel(_ submitLabel: SubmitLabel) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func moveDisabled(_ isDisabled: Bool) -> some View

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    public func accessibilityRotorEntry<ID>(id: ID, in namespace: Namespace.ID) -> some View where ID : Hashable

}

extension View {

    @available(iOS, unavailable)
    @available(macOS, introduced: 10.15, deprecated: 12.0, message: "Use FocusState<T> and View.focused(_:equals) for functionality previously provided by the onChange parameter.")
    @available(tvOS, introduced: 13.0, deprecated: 15.0, message: "Use FocusState<T> and View.focused(_:equals) for functionality previously provided by the onChange parameter.")
    @available(watchOS, introduced: 6.0, deprecated: 8.0, message: "Use FocusState<T> and View.focused(_:equals) for functionality previously provided by the onChange parameter.")
    public func focusable(_ isFocusable: Bool = true, onFocusChange: @escaping (_ isFocused: Bool) -> Void = { _ in }) -> some View


    @available(macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    @available(iOS, unavailable)
    public func focusable(_ isFocusable: Bool = true) -> some View

}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension View {

    public func onDrop(of supportedContentTypes: [UTType], isTargeted: Binding<Bool>?, perform action: @escaping (_ providers: [NSItemProvider]) -> Bool) -> some View


    public func onDrop(of supportedContentTypes: [UTType], isTargeted: Binding<Bool>?, perform action: @escaping (_ providers: [NSItemProvider], _ location: CGPoint) -> Bool) -> some View


    public func onDrop(of supportedContentTypes: [UTType], delegate: DropDelegate) -> some View

}

extension View {

    @available(iOS 16.0, macOS 13.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func dropDestination<T>(payloadType: T.Type, action: @escaping (_ items: [T], _ location: CGPoint) async -> Bool, isTargeted: @escaping (Bool) -> Void = { _ in }) -> some View where T : Transferable

}

@available(iOS, introduced: 13.4, deprecated: 100000.0, message: "Provide `UTType`s as the `supportedContentTypes` instead.")
@available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Provide `UTType`s as the `supportedContentTypes` instead.")
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension View {

    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func onDrop(of supportedTypes: [String], isTargeted: Binding<Bool>?, perform action: @escaping (_ providers: [NSItemProvider]) -> Bool) -> some View


    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func onDrop(of supportedTypes: [String], isTargeted: Binding<Bool>?, perform action: @escaping (_ providers: [NSItemProvider], _ location: CGPoint) -> Bool) -> some View


    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func onDrop(of supportedTypes: [String], delegate: DropDelegate) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func aspectRatio(_ aspectRatio: CGFloat? = nil, contentMode: ContentMode) -> some View


    @inlinable public func aspectRatio(_ aspectRatio: CGSize, contentMode: ContentMode) -> some View


    @inlinable public func scaledToFit() -> some View


    @inlinable public func scaledToFill() -> some View

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    public func symbolVariant(_ variant: SymbolVariants) -> some View

}

extension View {

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public func menuOrder(_ order: MenuOrder) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func padding(_ insets: EdgeInsets) -> some View


    @inlinable public func padding(_ edges: Edge.Set = .all, _ length: CGFloat? = nil) -> some View


    @inlinable public func padding(_ length: CGFloat) -> some View

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    public func scenePadding(_ edges: Edge.Set = .all) -> some View


    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public func scenePadding(_ padding: ScenePadding, edges: Edge.Set = .all) -> some View

}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension View {

    public func menuStyle<S>(_ style: S) -> some View where S : MenuStyle

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func offset(_ offset: CGSize) -> some View


    @inlinable public func offset(x: CGFloat = 0, y: CGFloat = 0) -> some View

}

@available(iOS 13.0, macOS 11.0, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func preferredColorScheme(_ colorScheme: ColorScheme?) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func position(_ position: CGPoint) -> some View


    @inlinable public func position(x: CGFloat = 0, y: CGFloat = 0) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func contentShape<S>(_ shape: S, eoFill: Bool = false) -> some View where S : Shape

}

@available(iOS 15.0, macOS 12.0, watchOS 8.0, *)
@available(tvOS, unavailable)
extension View {

    public func swipeActions<T>(edge: HorizontalEdge = .trailing, allowsFullSwipe: Bool = true, @ViewBuilder content: () -> T) -> some View where T : View

}

@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension View {

    @available(iOS 16.0, macOS 13.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func disclosureGroupStyle<S>(_ style: S) -> some View where S : DisclosureGroupStyle

}

@available(iOS 13.4, macOS 10.15, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension View {

    @inlinable public func onHover(perform action: @escaping (Bool) -> Void) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func transformEffect(_ transform: CGAffineTransform) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func disabled(_ disabled: Bool) -> some View

}

@available(macOS 12.0, tvOS 14.0, watchOS 7.0, *)
@available(iOS, unavailable)
extension View {

    public func prefersDefaultFocus(_ prefersDefaultFocus: Bool = true, in namespace: Namespace.ID) -> some View


    public func focusScope(_ namespace: Namespace.ID) -> some View

}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension View {

    public func fileExporter<D>(isPresented: Binding<Bool>, document: D?, contentType: UTType, defaultFilename: String? = nil, onCompletion: @escaping (_ result: Result<URL, Error>) -> Void) -> some View where D : FileDocument


    public func fileExporter<C>(isPresented: Binding<Bool>, documents: C, contentType: UTType, onCompletion: @escaping (_ result: Result<[URL], Error>) -> Void) -> some View where C : Collection, C.Element : FileDocument


    public func fileExporter<D>(isPresented: Binding<Bool>, document: D?, contentType: UTType, defaultFilename: String? = nil, onCompletion: @escaping (_ result: Result<URL, Error>) -> Void) -> some View where D : ReferenceFileDocument


    public func fileExporter<C>(isPresented: Binding<Bool>, documents: C, contentType: UTType, onCompletion: @escaping (_ result: Result<[URL], Error>) -> Void) -> some View where C : Collection, C.Element : ReferenceFileDocument

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func rotationEffect(_ angle: Angle, anchor: UnitPoint = .center) -> some View

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    public func accessibilityRepresentation<V>(@ViewBuilder representation: () -> V) -> some View where V : View


    public func accessibilityChildren<V>(@ViewBuilder children: () -> V) -> some View where V : View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func scaleEffect(_ scale: CGSize, anchor: UnitPoint = .center) -> some View


    @inlinable public func scaleEffect(_ s: CGFloat, anchor: UnitPoint = .center) -> some View


    @inlinable public func scaleEffect(x: CGFloat = 1.0, y: CGFloat = 1.0, anchor: UnitPoint = .center) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func hidden() -> some View

}

extension View {

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public func toolbarBackground<S>(_ style: S, in bars: ToolbarPlacement...) -> some View where S : ShapeStyle


    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public func toolbarBackground(_ visibility: Visibility, in bars: ToolbarPlacement...) -> some View


    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public func toolbarColorScheme(_ colorScheme: ColorScheme?, in bars: ToolbarPlacement...) -> some View


    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public func toolbar(_ visibility: Visibility, in bars: ToolbarPlacement...) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func blur(radius: CGFloat, opaque: Bool = false) -> some View

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    public func speechAlwaysIncludesPunctuation(_ value: Bool = true) -> some View


    public func speechSpellsOutCharacters(_ value: Bool = true) -> some View


    public func speechAdjustedPitch(_ value: Double) -> some View


    public func speechAnnouncementsQueued(_ value: Bool = true) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func frame(width: CGFloat? = nil, height: CGFloat? = nil, alignment: Alignment = .center) -> some View


    @available(*, deprecated, message: "Please pass one or more parameters.")
    @inlinable public func frame() -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func frame(minWidth: CGFloat? = nil, idealWidth: CGFloat? = nil, maxWidth: CGFloat? = nil, minHeight: CGFloat? = nil, idealHeight: CGFloat? = nil, maxHeight: CGFloat? = nil, alignment: Alignment = .center) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func brightness(_ amount: Double) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func alignmentGuide(_ g: HorizontalAlignment, computeValue: @escaping (ViewDimensions) -> CGFloat) -> some View


    @inlinable public func alignmentGuide(_ g: VerticalAlignment, computeValue: @escaping (ViewDimensions) -> CGFloat) -> some View

}

extension View {

    @available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 8.0, *)
    public func autocorrectionDisabled(_ disable: Bool = true) -> some View

}

extension View {

    @available(iOS, introduced: 13.0, deprecated: 100000.0, renamed: "autocorrectionDisabled(_:)")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, renamed: "autocorrectionDisabled(_:)")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, renamed: "autocorrectionDisabled(_:)")
    @available(watchOS, introduced: 8.0, deprecated: 100000.0, renamed: "autocorrectionDisabled(_:)")
    public func disableAutocorrection(_ disable: Bool?) -> some View

}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension View {

    public func navigationSplitViewColumnWidth(_ width: CGFloat) -> some View


    public func navigationSplitViewColumnWidth(min: CGFloat? = nil, ideal: CGFloat, max: CGFloat? = nil) -> some View

}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension View {

    public func defaultFocus<V>(_ binding: FocusState<V>.Binding, _ value: V, priority: DefaultFocusEvaluationPriority = .automatic) -> some View where V : Hashable

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func colorInvert() -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func colorMultiply(_ color: Color) -> some View

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension View {

    public func navigationTitle(_ title: Text) -> some View


    public func navigationTitle(_ titleKey: LocalizedStringKey) -> some View


    public func navigationTitle<S>(_ title: S) -> some View where S : StringProtocol

}

extension View {

    @available(iOS 16.0, macOS 13.0, watchOS 9.0, tvOS 16.0, *)
    public func navigationTitle(_ title: Binding<String>) -> some View

}

@available(macCatalyst 14.0, macOS 11.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension View {

    public func navigationSubtitle(_ subtitle: Text) -> some View


    public func navigationSubtitle(_ subtitleKey: LocalizedStringKey) -> some View


    public func navigationSubtitle<S>(_ subtitle: S) -> some View where S : StringProtocol

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func contrast(_ amount: Double) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func grayscale(_ amount: Double) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func hueRotation(_ angle: Angle) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func luminanceToAlpha() -> some View

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    @inlinable public func safeAreaInset<V>(edge: VerticalEdge, alignment: HorizontalAlignment = .center, spacing: CGFloat? = nil, @ViewBuilder content: () -> V) -> some View where V : View


    @inlinable public func safeAreaInset<V>(edge: HorizontalEdge, alignment: VerticalAlignment = .center, spacing: CGFloat? = nil, @ViewBuilder content: () -> V) -> some View where V : View

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension View {

    public func accessibilityLabel(_ label: Text) -> ModifiedContent<Self, AccessibilityAttachmentModifier>

    public func accessibilityLabel(_ labelKey: LocalizedStringKey) -> ModifiedContent<Self, AccessibilityAttachmentModifier>

    public func accessibilityLabel<S>(_ label: S) -> ModifiedContent<Self, AccessibilityAttachmentModifier> where S : StringProtocol
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func saturation(_ amount: Double) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func opacity(_ opacity: Double) -> some View

}

extension View {

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public func underline(_ isActive: Bool = true, pattern: Text.LineStyle.Pattern = .solid, color: Color? = nil) -> some View


    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public func strikethrough(_ isActive: Bool = true, pattern: Text.LineStyle.Pattern = .solid, color: Color? = nil) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func animation<V>(_ animation: Animation?, value: V) -> some View where V : Equatable

}

extension View where Self : Equatable {

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    @inlinable public func animation(_ animation: Animation?) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 7.0, *)
extension View {

    public func tabItem<V>(@ViewBuilder _ label: () -> V) -> some View where V : View

}

extension View {

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public func navigationSplitViewStyle<S>(_ style: S) -> some View where S : NavigationSplitViewStyle

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func blendMode(_ blendMode: BlendMode) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func transformEnvironment<V>(_ keyPath: WritableKeyPath<EnvironmentValues, V>, transform: @escaping (inout V) -> Void) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    public func toggleStyle<S>(_ style: S) -> some View where S : ToggleStyle

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    public func drawingGroup(opaque: Bool = false, colorMode: ColorRenderingMode = .nonLinear) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func compositingGroup() -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func shadow(color: Color = Color(.sRGBLinear, white: 0, opacity: 0.33), radius: CGFloat, x: CGFloat = 0, y: CGFloat = 0) -> some View

}

extension View {

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public func renameAction(_ isFocused: FocusState<Bool>.Binding) -> some View


    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public func renameAction(_ action: @escaping () -> Void) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func onReceive<P>(_ publisher: P, perform action: @escaping (P.Output) -> Void) -> some View where P : Publisher, P.Failure == Never

}

@available(iOS 15.0, macOS 12.0, *)
@available(watchOS, unavailable)
@available(tvOS, unavailable)
extension View {

    public func badge(_ count: Int) -> some View


    public func badge(_ label: Text?) -> some View


    public func badge(_ key: LocalizedStringKey?) -> some View


    public func badge<S>(_ label: S?) -> some View where S : StringProtocol

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func tag<V>(_ tag: V) -> some View where V : Hashable

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @available(macOS 11.0, *)
    @inlinable public func imageScale(_ scale: Image.Scale) -> some View


    @inlinable public func font(_ font: Font?) -> some View


    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public func monospacedDigit() -> some View


    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public func fontWeight(_ weight: Font.Weight?) -> some View


    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public func bold(_ isActive: Bool = true) -> some View


    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public func italic(_ isActive: Bool = true) -> some View


    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public func kerning(_ kerning: CGFloat) -> some View


    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public func tracking(_ tracking: CGFloat) -> some View


    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public func baselineOffset(_ baselineOffset: CGFloat) -> some View

}

extension View {

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public func scrollIndicators(_ visibility: ScrollIndicatorVisibility, axes: Axis.Set = [.vertical, .horizontal]) -> some View

}

extension View {

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public func scrollDisabled(_ disabled: Bool) -> some View

}

extension View {

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public func scrollDismissesKeyboard(_ mode: ScrollDismissesKeyboardMode) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    public func accessibilityAction(_ actionKind: AccessibilityActionKind = .default, _ handler: @escaping () -> Void) -> ModifiedContent<Self, AccessibilityAttachmentModifier>

    public func accessibilityAction(named name: Text, _ handler: @escaping () -> Void) -> ModifiedContent<Self, AccessibilityAttachmentModifier>
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    public func accessibilityAction<Label>(action: @escaping () -> Void, @ViewBuilder label: () -> Label) -> some View where Label : View

}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension View {

    public func accessibilityActions<Content>(@ViewBuilder _ content: () -> Content) -> some View where Content : View

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension View {

    public func accessibilityAction(named nameKey: LocalizedStringKey, _ handler: @escaping () -> Void) -> ModifiedContent<Self, AccessibilityAttachmentModifier>

    public func accessibilityAction<S>(named name: S, _ handler: @escaping () -> Void) -> ModifiedContent<Self, AccessibilityAttachmentModifier> where S : StringProtocol
}

extension View {

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public func navigationTitle<A>(_ title: Text, @ViewBuilder actions: () -> A) -> some View where A : View


    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public func navigationTitle<A>(_ titleKey: LocalizedStringKey, @ViewBuilder actions: () -> A) -> some View where A : View


    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public func navigationTitle<A, S>(_ title: S, @ViewBuilder actions: () -> A) -> some View where A : View, S : StringProtocol

}

extension View {

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public func navigationTitle<A>(_ title: Binding<String>, @ViewBuilder actions: () -> A) -> some View where A : View

}

@available(iOS 13.0, macOS 10.15, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension View {

    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func popover<Item, Content>(item: Binding<Item?>, attachmentAnchor: PopoverAttachmentAnchor = .rect(.bounds), arrowEdge: Edge = .top, @ViewBuilder content: @escaping (Item) -> Content) -> some View where Item : Identifiable, Content : View


    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func popover<Content>(isPresented: Binding<Bool>, attachmentAnchor: PopoverAttachmentAnchor = .rect(.bounds), arrowEdge: Edge = .top, @ViewBuilder content: @escaping () -> Content) -> some View where Content : View

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    public func confirmationDialog<A>(_ titleKey: LocalizedStringKey, isPresented: Binding<Bool>, titleVisibility: Visibility = .automatic, @ViewBuilder actions: () -> A) -> some View where A : View


    public func confirmationDialog<S, A>(_ title: S, isPresented: Binding<Bool>, titleVisibility: Visibility = .automatic, @ViewBuilder actions: () -> A) -> some View where S : StringProtocol, A : View


    public func confirmationDialog<A>(_ title: Text, isPresented: Binding<Bool>, titleVisibility: Visibility = .automatic, @ViewBuilder actions: () -> A) -> some View where A : View

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    public func confirmationDialog<A, M>(_ titleKey: LocalizedStringKey, isPresented: Binding<Bool>, titleVisibility: Visibility = .automatic, @ViewBuilder actions: () -> A, @ViewBuilder message: () -> M) -> some View where A : View, M : View


    public func confirmationDialog<S, A, M>(_ title: S, isPresented: Binding<Bool>, titleVisibility: Visibility = .automatic, @ViewBuilder actions: () -> A, @ViewBuilder message: () -> M) -> some View where S : StringProtocol, A : View, M : View


    public func confirmationDialog<A, M>(_ title: Text, isPresented: Binding<Bool>, titleVisibility: Visibility = .automatic, @ViewBuilder actions: () -> A, @ViewBuilder message: () -> M) -> some View where A : View, M : View

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    public func confirmationDialog<A, T>(_ titleKey: LocalizedStringKey, isPresented: Binding<Bool>, titleVisibility: Visibility = .automatic, presenting data: T?, @ViewBuilder actions: (T) -> A) -> some View where A : View


    public func confirmationDialog<S, A, T>(_ title: S, isPresented: Binding<Bool>, titleVisibility: Visibility = .automatic, presenting data: T?, @ViewBuilder actions: (T) -> A) -> some View where S : StringProtocol, A : View


    public func confirmationDialog<A, T>(_ title: Text, isPresented: Binding<Bool>, titleVisibility: Visibility = .automatic, presenting data: T?, @ViewBuilder actions: (T) -> A) -> some View where A : View

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    public func confirmationDialog<A, M, T>(_ titleKey: LocalizedStringKey, isPresented: Binding<Bool>, titleVisibility: Visibility = .automatic, presenting data: T?, @ViewBuilder actions: (T) -> A, @ViewBuilder message: (T) -> M) -> some View where A : View, M : View


    public func confirmationDialog<S, A, M, T>(_ title: S, isPresented: Binding<Bool>, titleVisibility: Visibility = .automatic, presenting data: T?, @ViewBuilder actions: (T) -> A, @ViewBuilder message: (T) -> M) -> some View where S : StringProtocol, A : View, M : View


    public func confirmationDialog<A, M, T>(_ title: Text, isPresented: Binding<Bool>, titleVisibility: Visibility = .automatic, presenting data: T?, @ViewBuilder actions: (T) -> A, @ViewBuilder message: (T) -> M) -> some View where A : View, M : View

}

extension View {

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public func toolbarRole(_ role: ToolbarRole) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func itemProvider(_ action: (() -> NSItemProvider?)?) -> some View

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension View {

    public func tabViewStyle<S>(_ style: S) -> some View where S : TabViewStyle

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    public func searchCompletion(_ completion: String) -> some View

}

extension View {

    @available(iOS 16.0, macOS 13.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func searchCompletion<T>(_ token: T) -> some View where T : Identifiable


    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public func searchSuggestions(_ visibility: Visibility, in placements: SearchSuggestionsPlacement.Set) -> some View

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    public func accessibilityFocused<Value>(_ binding: AccessibilityFocusState<Value>.Binding, equals value: Value) -> some View where Value : Hashable


    public func accessibilityFocused(_ condition: AccessibilityFocusState<Bool>.Binding) -> some View

}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension View {

    @inlinable public func gridCellColumns(_ count: Int) -> some View


    @inlinable public func gridCellAnchor(_ anchor: UnitPoint) -> some View


    @inlinable public func gridColumnAlignment(_ guide: HorizontalAlignment) -> some View


    @inlinable public func gridCellUnsizedAxes(_ axes: Axis.Set) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func fixedSize(horizontal: Bool, vertical: Bool) -> some View


    @inlinable public func fixedSize() -> some View

}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension View {

    public func contentTransition(_ transition: ContentTransition) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func foregroundColor(_ color: Color?) -> some View

}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension View {

    public func accessibilityQuickAction<Style, Content>(style: Style, @ViewBuilder content: () -> Content) -> some View where Style : AccessibilityQuickActionStyle, Content : View


    public func accessibilityQuickAction<Style, Content>(style: Style, isActive: Binding<Bool>, @ViewBuilder content: () -> Content) -> some View where Style : AccessibilityQuickActionStyle, Content : View

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    public func refreshable(action: @escaping @Sendable () async -> Void) -> some View

}

@available(iOS, unavailable)
@available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Use `menuStyle(_:)` instead.")
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension View {

    public func menuButtonStyle<S>(_ style: S) -> some View where S : MenuButtonStyle

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    public func alert<A>(_ titleKey: LocalizedStringKey, isPresented: Binding<Bool>, @ViewBuilder actions: () -> A) -> some View where A : View


    public func alert<S, A>(_ title: S, isPresented: Binding<Bool>, @ViewBuilder actions: () -> A) -> some View where S : StringProtocol, A : View


    public func alert<A>(_ title: Text, isPresented: Binding<Bool>, @ViewBuilder actions: () -> A) -> some View where A : View

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    public func alert<A, M>(_ titleKey: LocalizedStringKey, isPresented: Binding<Bool>, @ViewBuilder actions: () -> A, @ViewBuilder message: () -> M) -> some View where A : View, M : View


    public func alert<S, A, M>(_ title: S, isPresented: Binding<Bool>, @ViewBuilder actions: () -> A, @ViewBuilder message: () -> M) -> some View where S : StringProtocol, A : View, M : View


    public func alert<A, M>(_ title: Text, isPresented: Binding<Bool>, @ViewBuilder actions: () -> A, @ViewBuilder message: () -> M) -> some View where A : View, M : View

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    public func alert<A, T>(_ titleKey: LocalizedStringKey, isPresented: Binding<Bool>, presenting data: T?, @ViewBuilder actions: (T) -> A) -> some View where A : View


    public func alert<S, A, T>(_ title: S, isPresented: Binding<Bool>, presenting data: T?, @ViewBuilder actions: (T) -> A) -> some View where S : StringProtocol, A : View


    public func alert<A, T>(_ title: Text, isPresented: Binding<Bool>, presenting data: T?, @ViewBuilder actions: (T) -> A) -> some View where A : View

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    public func alert<A, M, T>(_ titleKey: LocalizedStringKey, isPresented: Binding<Bool>, presenting data: T?, @ViewBuilder actions: (T) -> A, @ViewBuilder message: (T) -> M) -> some View where A : View, M : View


    public func alert<S, A, M, T>(_ title: S, isPresented: Binding<Bool>, presenting data: T?, @ViewBuilder actions: (T) -> A, @ViewBuilder message: (T) -> M) -> some View where S : StringProtocol, A : View, M : View


    public func alert<A, M, T>(_ title: Text, isPresented: Binding<Bool>, presenting data: T?, @ViewBuilder actions: (T) -> A, @ViewBuilder message: (T) -> M) -> some View where A : View, M : View

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    public func alert<E, A>(isPresented: Binding<Bool>, error: E?, @ViewBuilder actions: () -> A) -> some View where E : LocalizedError, A : View


    public func alert<E, A, M>(isPresented: Binding<Bool>, error: E?, @ViewBuilder actions: (E) -> A, @ViewBuilder message: (E) -> M) -> some View where E : LocalizedError, A : View, M : View

}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension View {

    public func labeledContentStyle<S>(_ style: S) -> some View where S : LabeledContentStyle

}

@available(iOS 13.0, macOS 10.15, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension View {

    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func datePickerStyle<S>(_ style: S) -> some View where S : DatePickerStyle

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    @inlinable public func symbolRenderingMode(_ mode: SymbolRenderingMode?) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func anchorPreference<A, K>(key _: K.Type = K.self, value: Anchor<A>.Source, transform: @escaping (Anchor<A>) -> K.Value) -> some View where K : PreferenceKey

}

@available(macOS 11.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension View {

    public func presentedWindowStyle<S>(_ style: S) -> some View where S : WindowStyle

}

@available(macOS 12.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension View {

    public func exportsItemProviders(_ contentTypes: [UTType], onExport: @escaping () -> [NSItemProvider]) -> some View


    public func exportsItemProviders(_ contentTypes: [UTType], onExport: @escaping () -> [NSItemProvider], onEdit: @escaping ([NSItemProvider]) -> Bool) -> some View


    public func importsItemProviders(_ contentTypes: [UTType], onImport: @escaping ([NSItemProvider]) -> Bool) -> some View

}

@available(iOS 13.0, macOS 10.15, watchOS 6.0, tvOS 14.0, *)
extension View {

    @available(tvOS, unavailable)
    public func onLongPressGesture(minimumDuration: Double = 0.5, maximumDistance: CGFloat = 10, perform action: @escaping () -> Void, onPressingChanged: ((Bool) -> Void)? = nil) -> some View

}

@available(iOS 13.0, macOS 10.15, watchOS 6.0, tvOS 14.0, *)
extension View {

    @available(iOS, deprecated: 100000.0, renamed: "onLongPressGesture(minimumDuration:maximumDuration:perform:onPressingChanged:)")
    @available(macOS, deprecated: 100000.0, renamed: "onLongPressGesture(minimumDuration:maximumDuration:perform:onPressingChanged:)")
    @available(tvOS, unavailable)
    @available(watchOS, deprecated: 100000.0, renamed: "onLongPressGesture(minimumDuration:maximumDuration:perform:onPressingChanged:)")
    public func onLongPressGesture(minimumDuration: Double = 0.5, maximumDistance: CGFloat = 10, pressing: ((Bool) -> Void)? = nil, perform action: @escaping () -> Void) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    @inlinable public func backgroundStyle<S>(_ style: S) -> some View where S : ShapeStyle

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    public func accessibilityScrollAction(_ handler: @escaping (Edge) -> Void) -> ModifiedContent<Self, AccessibilityAttachmentModifier>
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension View {

    public func navigationDestination<D, C>(for data: D.Type, @ViewBuilder destination: @escaping (D) -> C) -> some View where D : Hashable, C : View

}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension View {

    public func formStyle<S>(_ style: S) -> some View where S : FormStyle

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    public func accessibilityElement(children: AccessibilityChildBehavior = .ignore) -> some View

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension View {

    @inlinable public func matchedGeometryEffect<ID>(id: ID, in namespace: Namespace.ID, properties: MatchedGeometryProperties = .frame, anchor: UnitPoint = .center, isSource: Bool = true) -> some View where ID : Hashable

}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension View {

    public func keyboardShortcut(_ key: KeyEquivalent, modifiers: EventModifiers = .command) -> some View


    public func keyboardShortcut(_ shortcut: KeyboardShortcut) -> some View


    @available(iOS 15.4, macOS 12.3, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func keyboardShortcut(_ shortcut: KeyboardShortcut?) -> some View

}

@available(iOS 15.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension View {

    public func keyboardShortcut(_ key: KeyEquivalent, modifiers: EventModifiers = .command, localization: KeyboardShortcut.Localization) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func onAppear(perform action: (() -> Void)? = nil) -> some View


    @inlinable public func onDisappear(perform action: (() -> Void)? = nil) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func flipsForRightToLeftLayoutDirection(_ enabled: Bool) -> some View

}

extension View {

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public func persistentSystemOverlays(_ visibility: Visibility) -> some View

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension View {

    public func accessibilityActivationPoint(_ activationPoint: CGPoint) -> ModifiedContent<Self, AccessibilityAttachmentModifier>

    public func accessibilityActivationPoint(_ activationPoint: UnitPoint) -> ModifiedContent<Self, AccessibilityAttachmentModifier>
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func transformAnchorPreference<A, K>(key _: K.Type = K.self, value: Anchor<A>.Source, transform: @escaping (inout K.Value, Anchor<A>) -> Void) -> some View where K : PreferenceKey

}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension View {

    public func fileImporter(isPresented: Binding<Bool>, allowedContentTypes: [UTType], onCompletion: @escaping (_ result: Result<URL, Error>) -> Void) -> some View


    public func fileImporter(isPresented: Binding<Bool>, allowedContentTypes: [UTType], allowsMultipleSelection: Bool, onCompletion: @escaping (_ result: Result<[URL], Error>) -> Void) -> some View

}

extension View {

    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public func accessibilityShowsLargeContentViewer<V>(@ViewBuilder _ largeContentView: () -> V) -> some View where V : View


    @available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
    public func accessibilityShowsLargeContentViewer() -> some View

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension View {

    public func accessibilityHint(_ hint: Text) -> ModifiedContent<Self, AccessibilityAttachmentModifier>

    public func accessibilityInputLabels(_ inputLabels: [Text]) -> ModifiedContent<Self, AccessibilityAttachmentModifier>

    public func accessibilityIdentifier(_ identifier: String) -> ModifiedContent<Self, AccessibilityAttachmentModifier>
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension View {

    public func accessibilityHint(_ hintKey: LocalizedStringKey) -> ModifiedContent<Self, AccessibilityAttachmentModifier>

    public func accessibilityHint<S>(_ hint: S) -> ModifiedContent<Self, AccessibilityAttachmentModifier> where S : StringProtocol

    public func accessibilityInputLabels(_ inputLabelKeys: [LocalizedStringKey]) -> ModifiedContent<Self, AccessibilityAttachmentModifier>

    public func accessibilityInputLabels<S>(_ inputLabels: [S]) -> ModifiedContent<Self, AccessibilityAttachmentModifier> where S : StringProtocol
}

extension View {

    @available(iOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityHidden(_:)")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, renamed: "accessibilityHidden(_:)")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityHidden(_:)")
    @available(watchOS, introduced: 6, deprecated: 100000.0, renamed: "accessibilityHidden(_:)")
    public func accessibility(hidden: Bool) -> ModifiedContent<Self, AccessibilityAttachmentModifier>

    @available(iOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityLabel(_:)")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, renamed: "accessibilityLabel(_:)")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityLabel(_:)")
    @available(watchOS, introduced: 6, deprecated: 100000.0, renamed: "accessibilityLabel(_:)")
    public func accessibility(label: Text) -> ModifiedContent<Self, AccessibilityAttachmentModifier>

    @available(iOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityHint(_:)")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, renamed: "accessibilityHint(_:)")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityHint(_:)")
    @available(watchOS, introduced: 6, deprecated: 100000.0, renamed: "accessibilityHint(_:)")
    public func accessibility(hint: Text) -> ModifiedContent<Self, AccessibilityAttachmentModifier>

    @available(iOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityInputLabels(_:)")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, renamed: "accessibilityInputLabels(_:)")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityInputLabels(_:)")
    @available(watchOS, introduced: 6, deprecated: 100000.0, renamed: "accessibilityInputLabels(_:)")
    public func accessibility(inputLabels: [Text]) -> ModifiedContent<Self, AccessibilityAttachmentModifier>

    @available(iOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityIdentifier(_:)")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, renamed: "accessibilityIdentifier(_:)")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityIdentifier(_:)")
    @available(watchOS, introduced: 6, deprecated: 100000.0, renamed: "accessibilityIdentifier(_:)")
    public func accessibility(identifier: String) -> ModifiedContent<Self, AccessibilityAttachmentModifier>

    @available(iOS, deprecated, introduced: 13.0)
    @available(macOS, deprecated, introduced: 10.15)
    @available(tvOS, deprecated, introduced: 13.0)
    @available(watchOS, deprecated, introduced: 6)
    public func accessibility(selectionIdentifier: AnyHashable) -> ModifiedContent<Self, AccessibilityAttachmentModifier>

    @available(iOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilitySortPriority(_:)")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, renamed: "accessibilitySortPriority(_:)")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilitySortPriority(_:)")
    @available(watchOS, introduced: 6, deprecated: 100000.0, renamed: "accessibilitySortPriority(_:)")
    public func accessibility(sortPriority: Double) -> ModifiedContent<Self, AccessibilityAttachmentModifier>

    @available(iOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityActivationPoint(_:)")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, renamed: "accessibilityActivationPoint(_:)")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityActivationPoint(_:)")
    @available(watchOS, introduced: 6, deprecated: 100000.0, renamed: "accessibilityActivationPoint(_:)")
    public func accessibility(activationPoint: CGPoint) -> ModifiedContent<Self, AccessibilityAttachmentModifier>

    @available(iOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityActivationPoint(_:)")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, renamed: "accessibilityActivationPoint(_:)")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityActivationPoint(_:)")
    @available(watchOS, introduced: 6, deprecated: 100000.0, renamed: "accessibilityActivationPoint(_:)")
    public func accessibility(activationPoint: UnitPoint) -> ModifiedContent<Self, AccessibilityAttachmentModifier>
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    public func accessibilityAdjustableAction(_ handler: @escaping (AccessibilityAdjustmentDirection) -> Void) -> ModifiedContent<Self, AccessibilityAttachmentModifier>
}

extension View {

    @available(iOS 16.0, macOS 13.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func searchable<V, S>(text: Binding<String>, scope: Binding<V>, placement: SearchFieldPlacement = .automatic, prompt: Text? = nil, @ViewBuilder scopes: () -> S) -> some View where V : Hashable, S : View


    @available(iOS 16.0, macOS 13.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func searchable<V, S>(text: Binding<String>, scope: Binding<V>, placement: SearchFieldPlacement = .automatic, prompt: LocalizedStringKey, @ViewBuilder scopes: () -> S) -> some View where V : Hashable, S : View


    @available(iOS 16.0, macOS 13.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func searchable<D, V, S>(text: Binding<String>, scope: Binding<D>, placement: SearchFieldPlacement = .automatic, prompt: S, @ViewBuilder scopes: () -> V) -> some View where D : Hashable, V : View, S : StringProtocol

}

extension View {

    @available(iOS 16.0, macOS 13.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func searchable<D, V1, V2>(text: Binding<String>, scope: Binding<D>, placement: SearchFieldPlacement = .automatic, prompt: Text? = nil, @ViewBuilder scopes: () -> V1, @ViewBuilder suggestions: () -> V2) -> some View where D : Hashable, V1 : View, V2 : View


    @available(iOS 16.0, macOS 13.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func searchable<D, V1, V2>(text: Binding<String>, scope: Binding<D>, placement: SearchFieldPlacement = .automatic, prompt: LocalizedStringKey, @ViewBuilder scopes: () -> V1, @ViewBuilder suggestions: () -> V2) -> some View where D : Hashable, V1 : View, V2 : View


    @available(iOS 16.0, macOS 13.0, *)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func searchable<D, V1, V2, S>(text: Binding<String>, scope: Binding<D>, placement: SearchFieldPlacement = .automatic, prompt: S, @ViewBuilder scopes: () -> V1, @ViewBuilder suggestions: () -> V2) -> some View where D : Hashable, V1 : View, V2 : View, S : StringProtocol

}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension View {

    @available(iOS, unavailable)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    @inlinable public func touchBarItemPresence(_ presence: TouchBarItemPresence) -> some View

}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension View {

    @available(iOS, unavailable)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    @inlinable public func touchBarItemPrincipal(_ principal: Bool = true) -> some View

}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension View {

    @available(iOS, unavailable)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func touchBarCustomizationLabel(_ label: Text) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func rotation3DEffect(_ angle: Angle, axis: (x: CGFloat, y: CGFloat, z: CGFloat), anchor: UnitPoint = .center, anchorZ: CGFloat = 0, perspective: CGFloat = 1) -> some View

}

extension View {

    @available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
    public func focusedValue<Value>(_ keyPath: WritableKeyPath<FocusedValues, Value?>, _ value: Value) -> some View

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    public func focusedSceneValue<T>(_ keyPath: WritableKeyPath<FocusedValues, T?>, _ value: T) -> some View

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    public func accessibilityCustomContent(_ key: AccessibilityCustomContentKey, _ value: Text?, importance: AXCustomContent.Importance = .default) -> ModifiedContent<Self, AccessibilityAttachmentModifier>

    public func accessibilityCustomContent(_ key: AccessibilityCustomContentKey, _ valueKey: LocalizedStringKey, importance: AXCustomContent.Importance = .default) -> ModifiedContent<Self, AccessibilityAttachmentModifier>

    public func accessibilityCustomContent<V>(_ key: AccessibilityCustomContentKey, _ value: V, importance: AXCustomContent.Importance = .default) -> ModifiedContent<Self, AccessibilityAttachmentModifier> where V : StringProtocol
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    public func accessibilityCustomContent(_ label: Text, _ value: Text, importance: AXCustomContent.Importance = .default) -> ModifiedContent<Self, AccessibilityAttachmentModifier>

    public func accessibilityCustomContent(_ labelKey: LocalizedStringKey, _ value: Text, importance: AXCustomContent.Importance = .default) -> ModifiedContent<Self, AccessibilityAttachmentModifier>

    public func accessibilityCustomContent(_ labelKey: LocalizedStringKey, _ valueKey: LocalizedStringKey, importance: AXCustomContent.Importance = .default) -> ModifiedContent<Self, AccessibilityAttachmentModifier>

    public func accessibilityCustomContent<V>(_ labelKey: LocalizedStringKey, _ value: V, importance: AXCustomContent.Importance = .default) -> ModifiedContent<Self, AccessibilityAttachmentModifier> where V : StringProtocol
}

@available(iOS 16.0, macOS 13.0, watchOS 9.0, *)
@available(tvOS, unavailable)
extension View {

    public func onTapGesture(count: Int = 1, coordinateSpace: CoordinateSpace = .local, perform action: @escaping (CGPoint) -> Void) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func listRowBackground<V>(_ view: V?) -> some View where V : View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func transition(_ t: AnyTransition) -> some View

}

@available(iOS 15.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension View {

    @inlinable public func menuIndicator(_ visibility: Visibility) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func zIndex(_ value: Double) -> some View

}

@available(iOS, introduced: 13.0, deprecated: 100000.0, message: "Use ignoresSafeArea(_:edges:) instead.")
@available(macOS, introduced: 10.15, deprecated: 100000.0, message: "Use ignoresSafeArea(_:edges:) instead.")
@available(tvOS, introduced: 13.0, deprecated: 100000.0, message: "Use ignoresSafeArea(_:edges:) instead.")
@available(watchOS, introduced: 6.0, deprecated: 100000.0, message: "Use ignoresSafeArea(_:edges:) instead.")
extension View {

    @inlinable public func edgesIgnoringSafeArea(_ edges: Edge.Set) -> some View

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension View {

    @inlinable public func ignoresSafeArea(_ regions: SafeAreaRegions = .all, edges: Edge.Set = .all) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func preference<K>(key: K.Type = K.self, value: K.Value) -> some View where K : PreferenceKey

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    public func pickerStyle<S>(_ style: S) -> some View where S : PickerStyle

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension View {

    public func accessibilitySortPriority(_ sortPriority: Double) -> ModifiedContent<Self, AccessibilityAttachmentModifier>
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    public func listStyle<S>(_ style: S) -> some View where S : ListStyle

}

@available(macOS 13.0, tvOS 15.0, *)
@available(iOS, unavailable)
@available(watchOS, unavailable)
extension View {

    public func focusSection() -> some View

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    public func searchable<S>(text: Binding<String>, placement: SearchFieldPlacement = .automatic, prompt: Text? = nil, @ViewBuilder suggestions: () -> S) -> some View where S : View


    public func searchable<S>(text: Binding<String>, placement: SearchFieldPlacement = .automatic, prompt: LocalizedStringKey, @ViewBuilder suggestions: () -> S) -> some View where S : View


    public func searchable<V, S>(text: Binding<String>, placement: SearchFieldPlacement = .automatic, prompt: S, @ViewBuilder suggestions: () -> V) -> some View where V : View, S : StringProtocol

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    public func textFieldStyle<S>(_ style: S) -> some View where S : TextFieldStyle

}

@available(iOS 15.0, macOS 10.15, watchOS 9.0, *)
@available(tvOS, unavailable)
extension View {

    @available(tvOS, unavailable)
    @inlinable public func controlSize(_ controlSize: ControlSize) -> some View

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    @inlinable public func buttonBorderShape(_ shape: ButtonBorderShape) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func clipShape<S>(_ shape: S, style: FillStyle = FillStyle()) -> some View where S : Shape


    @inlinable public func clipped(antialiased: Bool = false) -> some View


    @inlinable public func cornerRadius(_ radius: CGFloat, antialiased: Bool = true) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func listRowInsets(_ insets: EdgeInsets?) -> some View

}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension View {

    public func tableStyle<S>(_ style: S) -> some View where S : TableStyle

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func multilineTextAlignment(_ alignment: TextAlignment) -> some View


    @inlinable public func truncationMode(_ mode: Text.TruncationMode) -> some View


    @inlinable public func lineSpacing(_ lineSpacing: CGFloat) -> some View


    @inlinable public func allowsTightening(_ flag: Bool) -> some View


    @inlinable public func minimumScaleFactor(_ factor: CGFloat) -> some View


    @available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
    @inlinable public func textCase(_ textCase: Text.Case?) -> some View

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension View {

    public func accessibilityHidden(_ hidden: Bool) -> ModifiedContent<Self, AccessibilityAttachmentModifier>
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension View {

    public func accessibilityValue(_ valueDescription: Text) -> ModifiedContent<Self, AccessibilityAttachmentModifier>

    public func accessibilityValue(_ valueKey: LocalizedStringKey) -> ModifiedContent<Self, AccessibilityAttachmentModifier>

    public func accessibilityValue<S>(_ value: S) -> ModifiedContent<Self, AccessibilityAttachmentModifier> where S : StringProtocol
}

extension View {

    @available(iOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityValue(_:)")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, renamed: "accessibilityValue(_:)")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityValue(_:)")
    @available(watchOS, introduced: 6, deprecated: 100000.0, renamed: "accessibilityValue(_:)")
    public func accessibility(value: Text) -> ModifiedContent<Self, AccessibilityAttachmentModifier>
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    public func dynamicTypeSize(_ size: DynamicTypeSize) -> some View


    public func dynamicTypeSize<T>(_ range: T) -> some View where T : RangeExpression, T.Bound == DynamicTypeSize

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func transformPreference<K>(_ key: K.Type = K.self, _ callback: @escaping (inout K.Value) -> Void) -> some View where K : PreferenceKey

}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension View {

    public func groupBoxStyle<S>(_ style: S) -> some View where S : GroupBoxStyle

}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, *)
@available(watchOS, unavailable)
extension View {

    public func onContinuousHover(coordinateSpace: CoordinateSpace = .local, perform action: @escaping (HoverPhase) -> Void) -> some View

}

@available(macOS 11.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension View {

    public func presentedWindowToolbarStyle<S>(_ style: S) -> some View where S : WindowToolbarStyle

}

@available(iOS 15.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension View {

    public func controlGroupStyle<S>(_ style: S) -> some View where S : ControlGroupStyle

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension View {

    @inlinable public func accessibilityIgnoresInvertColors(_ active: Bool = true) -> some View

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    @inlinable public func contentShape<S>(_ kind: ContentShapeKinds, _ shape: S, eoFill: Bool = false) -> some View where S : Shape

}

extension View {

    @available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
    public func interactionActivityTrackingTag(_ tag: String) -> some View

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    public func onSubmit(of triggers: SubmitTriggers = .text, _ action: @escaping (() -> Void)) -> some View


    public func submitScope(_ isBlocking: Bool = true) -> some View

}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension View {

    @inlinable public func tint<S>(_ tint: S?) -> some View where S : ShapeStyle

}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension View {

    @inlinable public func tint(_ tint: Color?) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func coordinateSpace<T>(name: T) -> some View where T : Hashable

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    @inlinable public func environmentObject<T>(_ object: T) -> some View where T : ObservableObject

}

@available(macOS 10.15, tvOS 13.0, *)
@available(iOS, unavailable)
@available(watchOS, unavailable)
extension View {

    @available(iOS, unavailable)
    @available(watchOS, unavailable)
    public func onMoveCommand(perform action: ((MoveCommandDirection) -> Void)?) -> some View


    @available(iOS, unavailable)
    @available(watchOS, unavailable)
    public func onExitCommand(perform action: (() -> Void)?) -> some View


    @available(iOS, unavailable)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func onDeleteCommand(perform action: (() -> Void)?) -> some View

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension View {

    public func labelsHidden() -> some View

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension View {

    @inlinable public func listItemTint(_ tint: ListItemTint?) -> some View


    @inlinable public func listItemTint(_ tint: Color?) -> some View

}

@available(iOS 15.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension View {

    public func textSelection<S>(_ selectability: S) -> some View where S : TextSelectability

}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension View {

    public func fileMover(isPresented: Binding<Bool>, file: URL?, onCompletion: @escaping (_ result: Result<URL, Error>) -> Void) -> some View


    public func fileMover<C>(isPresented: Binding<Bool>, files: C, onCompletion: @escaping (_ result: Result<[URL], Error>) -> Void) -> some View where C : Collection, C.Element == URL

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension View {

    public func toolbar<Content>(@ViewBuilder content: () -> Content) -> some View where Content : View


    public func toolbar<Content>(@ToolbarContentBuilder content: () -> Content) -> some View where Content : ToolbarContent


    public func toolbar<Content>(id: String, @ToolbarContentBuilder content: () -> Content) -> some View where Content : CustomizableToolbarContent

}

@available(iOS 15.0, macOS 13.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension View {

    public func listRowSeparator(_ visibility: Visibility, edges: VerticalEdge.Set = .all) -> some View


    public func listRowSeparatorTint(_ color: Color?, edges: VerticalEdge.Set = .all) -> some View

}

@available(iOS 15.0, macOS 13.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension View {

    public func listSectionSeparator(_ visibility: Visibility, edges: VerticalEdge.Set = .all) -> some View


    public func listSectionSeparatorTint(_ color: Color?, edges: VerticalEdge.Set = .all) -> some View

}

@available(macOS 10.15, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension View {

    @available(iOS, unavailable)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public func horizontalRadioGroupLayout() -> some View

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension View {

    public func progressViewStyle<S>(_ style: S) -> some View where S : ProgressViewStyle

}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension View {

    public func accessibilityAddTraits(_ traits: AccessibilityTraits) -> ModifiedContent<Self, AccessibilityAttachmentModifier>

    public func accessibilityRemoveTraits(_ traits: AccessibilityTraits) -> ModifiedContent<Self, AccessibilityAttachmentModifier>
}

extension View {

    @available(iOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityAddTraits(_:)")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, renamed: "accessibilityAddTraits(_:)")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityAddTraits(_:)")
    @available(watchOS, introduced: 6, deprecated: 100000.0, renamed: "accessibilityAddTraits(_:)")
    public func accessibility(addTraits traits: AccessibilityTraits) -> ModifiedContent<Self, AccessibilityAttachmentModifier>

    @available(iOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityRemoveTraits(_:)")
    @available(macOS, introduced: 10.15, deprecated: 100000.0, renamed: "accessibilityRemoveTraits(_:)")
    @available(tvOS, introduced: 13.0, deprecated: 100000.0, renamed: "accessibilityRemoveTraits(_:)")
    @available(watchOS, introduced: 6, deprecated: 100000.0, renamed: "accessibilityRemoveTraits(_:)")
    public func accessibility(removeTraits traits: AccessibilityTraits) -> ModifiedContent<Self, AccessibilityAttachmentModifier>
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@resultBuilder public struct ViewBuilder {

    public static func buildBlock() -> EmptyView

    public static func buildBlock<Content>(_ content: Content) -> Content where Content : View
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ViewBuilder {

    public static func buildIf<Content>(_ content: Content?) -> Content? where Content : View

    public static func buildEither<TrueContent, FalseContent>(first: TrueContent) -> _ConditionalContent<TrueContent, FalseContent> where TrueContent : View, FalseContent : View

    public static func buildEither<TrueContent, FalseContent>(second: FalseContent) -> _ConditionalContent<TrueContent, FalseContent> where TrueContent : View, FalseContent : View
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension ViewBuilder {

    public static func buildLimitedAvailability<Content>(_ content: Content) -> AnyView where Content : View
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ViewBuilder {

    public static func buildBlock<C0, C1>(_ c0: C0, _ c1: C1) -> TupleView<(C0, C1)> where C0 : View, C1 : View
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ViewBuilder {

    public static func buildBlock<C0, C1, C2>(_ c0: C0, _ c1: C1, _ c2: C2) -> TupleView<(C0, C1, C2)> where C0 : View, C1 : View, C2 : View
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ViewBuilder {

    public static func buildBlock<C0, C1, C2, C3>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3) -> TupleView<(C0, C1, C2, C3)> where C0 : View, C1 : View, C2 : View, C3 : View
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ViewBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4) -> TupleView<(C0, C1, C2, C3, C4)> where C0 : View, C1 : View, C2 : View, C3 : View, C4 : View
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ViewBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5) -> TupleView<(C0, C1, C2, C3, C4, C5)> where C0 : View, C1 : View, C2 : View, C3 : View, C4 : View, C5 : View
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ViewBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6) -> TupleView<(C0, C1, C2, C3, C4, C5, C6)> where C0 : View, C1 : View, C2 : View, C3 : View, C4 : View, C5 : View, C6 : View
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ViewBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6, C7>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6, _ c7: C7) -> TupleView<(C0, C1, C2, C3, C4, C5, C6, C7)> where C0 : View, C1 : View, C2 : View, C3 : View, C4 : View, C5 : View, C6 : View, C7 : View
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ViewBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6, C7, C8>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6, _ c7: C7, _ c8: C8) -> TupleView<(C0, C1, C2, C3, C4, C5, C6, C7, C8)> where C0 : View, C1 : View, C2 : View, C3 : View, C4 : View, C5 : View, C6 : View, C7 : View, C8 : View
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ViewBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6, C7, C8, C9>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6, _ c7: C7, _ c8: C8, _ c9: C9) -> TupleView<(C0, C1, C2, C3, C4, C5, C6, C7, C8, C9)> where C0 : View, C1 : View, C2 : View, C3 : View, C4 : View, C5 : View, C6 : View, C7 : View, C8 : View, C9 : View
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public struct ViewDimensions {

    public var width: CGFloat { get }

    public var height: CGFloat { get }

    public subscript(guide: HorizontalAlignment) -> CGFloat { get }

    public subscript(guide: VerticalAlignment) -> CGFloat { get }

    public subscript(explicit guide: HorizontalAlignment) -> CGFloat? { get }

    public subscript(explicit guide: VerticalAlignment) -> CGFloat? { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ViewDimensions : Equatable {

    public static func == (lhs: ViewDimensions, rhs: ViewDimensions) -> Bool
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public protocol ViewModifier {

    associatedtype Body : View

    @ViewBuilder @MainActor func body(content: Self.Content) -> Self.Body

    typealias Content
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ViewModifier {

    @inlinable public func transaction(_ transform: @escaping (inout Transaction) -> Void) -> some ViewModifier


    @inlinable public func animation(_ animation: Animation?) -> some ViewModifier

}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ViewModifier where Self.Body == Never {

    public func body(content: Self.Content) -> Self.Body
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension ViewModifier {

    @inlinable public func concat<T>(_ modifier: T) -> ModifiedContent<Self, T>
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
public struct ViewSpacing {

    public static let zero: ViewSpacing

    public init()

    public mutating func formUnion(_ other: ViewSpacing, edges: Edge.Set = .all)

    public func union(_ other: ViewSpacing, edges: Edge.Set = .all) -> ViewSpacing

    public func distance(to next: ViewSpacing, along axis: Axis) -> CGFloat
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
@frozen public struct ViewThatFits<Content> : View where Content : View {

    @inlinable public init(in axes: Axis.Set = [.horizontal, .vertical], @ViewBuilder content: () -> Content)

    public typealias Body = Never
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
@frozen public enum Visibility : Hashable, CaseIterable {

    case automatic

    case visible

    case hidden

    public static func == (a: Visibility, b: Visibility) -> Bool

    public func hash(into hasher: inout Hasher)

    public typealias AllCases = [Visibility]

    public static var allCases: [Visibility] { get }

    public var hashValue: Int { get }
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension Visibility : Sendable {
}

@available(iOS 14.0, macOS 11.0, watchOS 9.0, *)
@available(tvOS, unavailable)
public protocol Widget {

    associatedtype Body : WidgetConfiguration

    init()

    var body: Self.Body { get }
}

@available(iOS 14.0, macOS 11.0, watchOS 9.0, *)
@available(tvOS, unavailable)
public protocol WidgetBundle {

    associatedtype Body : Widget

    init()

    @WidgetBundleBuilder var body: Self.Body { get }
}

@available(iOS 14.0, macOS 11.0, watchOS 9.0, *)
@available(tvOS, unavailable)
@resultBuilder public struct WidgetBundleBuilder {

    public static func buildBlock() -> some Widget


    public static func buildBlock<Content>(_ content: Content) -> some Widget where Content : Widget

}

@available(iOS 14.0, macOS 11.0, watchOS 9.0, *)
@available(tvOS, unavailable)
extension WidgetBundleBuilder {

    public static func buildBlock<C0, C1>(_ c0: C0, _ c1: C1) -> some Widget where C0 : Widget, C1 : Widget

}

@available(iOS 14.0, macOS 11.0, watchOS 9.0, *)
@available(tvOS, unavailable)
extension WidgetBundleBuilder {

    public static func buildBlock<C0, C1, C2>(_ c0: C0, _ c1: C1, _ c2: C2) -> some Widget where C0 : Widget, C1 : Widget, C2 : Widget

}

@available(iOS 14.0, macOS 11.0, watchOS 9.0, *)
@available(tvOS, unavailable)
extension WidgetBundleBuilder {

    public static func buildBlock<C0, C1, C2, C3>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3) -> some Widget where C0 : Widget, C1 : Widget, C2 : Widget, C3 : Widget

}

@available(iOS 14.0, macOS 11.0, watchOS 9.0, *)
@available(tvOS, unavailable)
extension WidgetBundleBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4) -> some Widget where C0 : Widget, C1 : Widget, C2 : Widget, C3 : Widget, C4 : Widget

}

@available(iOS 14.0, macOS 11.0, watchOS 9.0, *)
@available(tvOS, unavailable)
extension WidgetBundleBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5) -> some Widget where C0 : Widget, C1 : Widget, C2 : Widget, C3 : Widget, C4 : Widget, C5 : Widget

}

@available(iOS 14.0, macOS 11.0, watchOS 9.0, *)
@available(tvOS, unavailable)
extension WidgetBundleBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6) -> some Widget where C0 : Widget, C1 : Widget, C2 : Widget, C3 : Widget, C4 : Widget, C5 : Widget, C6 : Widget

}

@available(iOS 14.0, macOS 11.0, watchOS 9.0, *)
@available(tvOS, unavailable)
extension WidgetBundleBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6, C7>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6, _ c7: C7) -> some Widget where C0 : Widget, C1 : Widget, C2 : Widget, C3 : Widget, C4 : Widget, C5 : Widget, C6 : Widget, C7 : Widget

}

@available(iOS 14.0, macOS 11.0, watchOS 9.0, *)
@available(tvOS, unavailable)
extension WidgetBundleBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6, C7, C8>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6, _ c7: C7, _ c8: C8) -> some Widget where C0 : Widget, C1 : Widget, C2 : Widget, C3 : Widget, C4 : Widget, C5 : Widget, C6 : Widget, C7 : Widget, C8 : Widget

}

@available(iOS 14.0, macOS 11.0, watchOS 9.0, *)
@available(tvOS, unavailable)
extension WidgetBundleBuilder {

    public static func buildBlock<C0, C1, C2, C3, C4, C5, C6, C7, C8, C9>(_ c0: C0, _ c1: C1, _ c2: C2, _ c3: C3, _ c4: C4, _ c5: C5, _ c6: C6, _ c7: C7, _ c8: C8, _ c9: C9) -> some Widget where C0 : Widget, C1 : Widget, C2 : Widget, C3 : Widget, C4 : Widget, C5 : Widget, C6 : Widget, C7 : Widget, C8 : Widget, C9 : Widget

}

@available(iOS 14.0, macOS 11.0, watchOS 9.0, *)
@available(tvOS, unavailable)
public protocol WidgetConfiguration {

    associatedtype Body : WidgetConfiguration

    var body: Self.Body { get }
}

@available(iOS 16.0, macOS 13.0, watchOS 9.0, *)
@available(tvOS, unavailable)
extension WidgetConfiguration {

    public func backgroundTask<D, R>(_ task: BackgroundTask<D, R>, action: @escaping @Sendable (D) async -> R) -> some WidgetConfiguration where D : Sendable, R : Sendable

}

@available(macOS 13.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct Window<Content> : Scene where Content : View {

    @MainActor public var body: some Scene { get }

    public init(_ title: Text, id: String, @ViewBuilder content: () -> Content)

    public init(_ titleKey: LocalizedStringKey, id: String, @ViewBuilder content: () -> Content)

    public init<S>(_ title: S, id: String, @ViewBuilder content: () -> Content) where S : StringProtocol

    public typealias Body = some Scene
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
public struct WindowGroup<Content> : Scene where Content : View {

    public init(id: String, @ViewBuilder content: () -> Content)

    public init(_ title: Text, id: String, @ViewBuilder content: () -> Content)

    public init(_ titleKey: LocalizedStringKey, id: String, @ViewBuilder content: () -> Content)

    public init<S>(_ title: S, id: String, @ViewBuilder content: () -> Content) where S : StringProtocol

    public init(@ViewBuilder content: () -> Content)

    public init(_ title: Text, @ViewBuilder content: () -> Content)

    public init(_ titleKey: LocalizedStringKey, @ViewBuilder content: () -> Content)

    public init<S>(_ title: S, @ViewBuilder content: () -> Content) where S : StringProtocol

    @MainActor public var body: some Scene { get }

    public typealias Body = some Scene
}

@available(macOS 13.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension WindowGroup {

    public init<D, C>(id: String, for type: D.Type, @ViewBuilder content: @escaping (Binding<D?>) -> C) where Content == PresentedWindowContent<D, C>, D : Decodable, D : Encodable, D : Hashable, C : View

    public init<D, C>(_ title: Text, id: String, for type: D.Type, @ViewBuilder content: @escaping (Binding<D?>) -> C) where Content == PresentedWindowContent<D, C>, D : Decodable, D : Encodable, D : Hashable, C : View

    public init<D, C>(_ titleKey: LocalizedStringKey, id: String, for type: D.Type, @ViewBuilder content: @escaping (Binding<D?>) -> C) where Content == PresentedWindowContent<D, C>, D : Decodable, D : Encodable, D : Hashable, C : View

    public init<S, D, C>(_ title: S, id: String, for type: D.Type, @ViewBuilder content: @escaping (Binding<D?>) -> C) where Content == PresentedWindowContent<D, C>, S : StringProtocol, D : Decodable, D : Encodable, D : Hashable, C : View

    public init<D, C>(for type: D.Type, @ViewBuilder content: @escaping (Binding<D?>) -> C) where Content == PresentedWindowContent<D, C>, D : Decodable, D : Encodable, D : Hashable, C : View

    public init<D, C>(_ title: Text, for type: D.Type, @ViewBuilder content: @escaping (Binding<D?>) -> C) where Content == PresentedWindowContent<D, C>, D : Decodable, D : Encodable, D : Hashable, C : View

    public init<D, C>(_ titleKey: LocalizedStringKey, for type: D.Type, @ViewBuilder content: @escaping (Binding<D?>) -> C) where Content == PresentedWindowContent<D, C>, D : Decodable, D : Encodable, D : Hashable, C : View

    public init<S, D, C>(_ title: S, for type: D.Type, @ViewBuilder content: @escaping (Binding<D?>) -> C) where Content == PresentedWindowContent<D, C>, S : StringProtocol, D : Decodable, D : Encodable, D : Hashable, C : View

    public init<D, C>(id: String, for type: D.Type = D.self, @ViewBuilder content: @escaping (Binding<D>) -> C, defaultValue: @escaping () -> D) where Content == PresentedWindowContent<D, C>, D : Decodable, D : Encodable, D : Hashable, C : View

    public init<D, C>(_ title: Text, id: String, for type: D.Type = D.self, @ViewBuilder content: @escaping (Binding<D>) -> C, defaultValue: @escaping () -> D) where Content == PresentedWindowContent<D, C>, D : Decodable, D : Encodable, D : Hashable, C : View

    public init<D, C>(_ titleKey: LocalizedStringKey, id: String, for type: D.Type = D.self, @ViewBuilder content: @escaping (Binding<D>) -> C, defaultValue: @escaping () -> D) where Content == PresentedWindowContent<D, C>, D : Decodable, D : Encodable, D : Hashable, C : View

    public init<S, D, C>(_ title: S, id: String, for type: D.Type = D.self, @ViewBuilder content: @escaping (Binding<D>) -> C, defaultValue: @escaping () -> D) where Content == PresentedWindowContent<D, C>, S : StringProtocol, D : Decodable, D : Encodable, D : Hashable, C : View

    public init<D, C>(for type: D.Type = D.self, @ViewBuilder content: @escaping (Binding<D>) -> C, defaultValue: @escaping () -> D) where Content == PresentedWindowContent<D, C>, D : Decodable, D : Encodable, D : Hashable, C : View

    public init<D, C>(_ title: Text, for type: D.Type = D.self, @ViewBuilder content: @escaping (Binding<D>) -> C, defaultValue: @escaping () -> D) where Content == PresentedWindowContent<D, C>, D : Decodable, D : Encodable, D : Hashable, C : View

    public init<D, C>(_ titleKey: LocalizedStringKey, for type: D.Type = D.self, @ViewBuilder content: @escaping (Binding<D>) -> C, defaultValue: @escaping () -> D) where Content == PresentedWindowContent<D, C>, D : Decodable, D : Encodable, D : Hashable, C : View

    public init<S, D, C>(_ title: S, for type: D.Type = D.self, @ViewBuilder content: @escaping (Binding<D>) -> C, defaultValue: @escaping () -> D) where Content == PresentedWindowContent<D, C>, S : StringProtocol, D : Decodable, D : Encodable, D : Hashable, C : View
}

@available(macOS 13.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct WindowMenuBarExtraStyle : MenuBarExtraStyle {

    public init()
}

@available(macOS 13.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public struct WindowResizability {

    public static var automatic: WindowResizability

    public static var contentSize: WindowResizability

    public static var contentMinSize: WindowResizability
}

@available(macOS 11.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public protocol WindowStyle {
}

@available(macOS 11.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension WindowStyle where Self == HiddenTitleBarWindowStyle {

    public static var hiddenTitleBar: HiddenTitleBarWindowStyle { get }
}

@available(macOS 11.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension WindowStyle where Self == TitleBarWindowStyle {

    public static var titleBar: TitleBarWindowStyle { get }
}

@available(macOS 11.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension WindowStyle where Self == DefaultWindowStyle {

    public static var automatic: DefaultWindowStyle { get }
}

@available(macOS 11.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
public protocol WindowToolbarStyle {
}

@available(macOS 11.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension WindowToolbarStyle where Self == ExpandedWindowToolbarStyle {

    public static var expanded: ExpandedWindowToolbarStyle { get }
}

@available(macOS 11.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension WindowToolbarStyle where Self == UnifiedWindowToolbarStyle {

    public static var unified: UnifiedWindowToolbarStyle { get }

    public static func unified(showsTitle: Bool) -> UnifiedWindowToolbarStyle
}

@available(macOS 11.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension WindowToolbarStyle where Self == DefaultWindowToolbarStyle {

    public static var automatic: DefaultWindowToolbarStyle { get }
}

@available(macOS 11.0, *)
@available(iOS, unavailable)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension WindowToolbarStyle where Self == UnifiedCompactWindowToolbarStyle {

    public static var unifiedCompact: UnifiedCompactWindowToolbarStyle { get }

    public static func unifiedCompact(showsTitle: Bool) -> UnifiedCompactWindowToolbarStyle
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
@frozen public struct ZStack<Content> : View where Content : View {

    @inlinable public init(alignment: Alignment = .center, @ViewBuilder content: () -> Content)

    public typealias Body = Never
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public func withAnimation<Result>(_ animation: Animation? = .default, _ body: () throws -> Result) rethrows -> Result

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
public func withTransaction<Result>(_ transaction: Transaction, _ body: () throws -> Result) rethrows -> Result

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension Never : TableColumnContent {

    public typealias TableColumnSortComparator = Never

    public typealias TableColumnBody = Never

    public var tableColumnBody: Never { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Optional : View where Wrapped : View {

    public typealias Body = Never
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension NSUserActivity {

    @available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
    public enum TypedPayloadError : Error {

            case invalidContent

            case encodingError

                                        public static func == (a: NSUserActivity.TypedPayloadError, b: NSUserActivity.TypedPayloadError) -> Bool

                                                            public func hash(into hasher: inout Hasher)

                                    public var hashValue: Int { get }
    }

    public func typedPayload<T>(_ type: T.Type) throws -> T where T : Decodable, T : Encodable

    public func setTypedPayload<T>(_ payload: T) throws where T : Decodable, T : Encodable
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension Optional : ToolbarContent where Wrapped : ToolbarContent {
}

@available(iOS 16.0, macOS 13.0, tvOS 16.0, watchOS 9.0, *)
extension Optional : CustomizableToolbarContent where Wrapped : CustomizableToolbarContent {
}

extension NSDirectionalEdgeInsets {

    @available(iOS 14.0, macOS 11.0, tvOS 14.0, *)
    @available(watchOS, unavailable)
    public init(_ edgeInsets: EdgeInsets)
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Float : VectorArithmetic {

    public mutating func scale(by rhs: Double)

    public var magnitudeSquared: Double { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Double : VectorArithmetic {

    public mutating func scale(by rhs: Double)

    public var magnitudeSquared: Double { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension CGFloat : VectorArithmetic {

    public mutating func scale(by rhs: Double)

    public var magnitudeSquared: Double { get }
}

@available(iOS 16.0, macOS 13.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension Optional : Commands where Wrapped : Commands {
}

extension NSColor {

    @available(macOS 11.0, *)
    @available(iOS, unavailable)
    @available(tvOS, unavailable)
    @available(watchOS, unavailable)
    public convenience init(_ color: Color)
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension Never : AccessibilityRotorContent {
}

@available(iOS 15.0, macOS 12.0, tvOS 15.0, watchOS 8.0, *)
extension NSUnderlineStyle {

    public init(_ lineStyle: Text.LineStyle)
}

extension RangeReplaceableCollection where Self : MutableCollection {

    @available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
    public mutating func remove(atOffsets offsets: IndexSet)
}

extension MutableCollection {

    @available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
    public mutating func move(fromOffsets source: IndexSet, toOffset destination: Int)
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension Never {

    public typealias TableRowValue = Never
}

@available(iOS 16.0, macOS 12.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension Never : TableRowContent {

    public typealias TableRowBody = Never

    public var tableRowBody: Never { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension CGPoint {

    public func applying(_ m: ProjectionTransform) -> CGPoint
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Never : Gesture {

    public typealias Value = Never
}

extension AttributeScopes {

    @available(macOS 12.0, iOS 15.0, tvOS 15.0, watchOS 8.0, *)
    public var swiftUI: AttributeScopes.SwiftUIAttributes.Type { get }

    @available(macOS 12.0, iOS 15.0, tvOS 15.0, watchOS 8.0, *)
    public struct SwiftUIAttributes : AttributeScope {

            public let font: AttributeScopes.SwiftUIAttributes.FontAttribute

            public let foregroundColor: AttributeScopes.SwiftUIAttributes.ForegroundColorAttribute

            public let backgroundColor: AttributeScopes.SwiftUIAttributes.BackgroundColorAttribute

            public let strikethroughStyle: AttributeScopes.SwiftUIAttributes.StrikethroughStyleAttribute

            public let underlineStyle: AttributeScopes.SwiftUIAttributes.UnderlineStyleAttribute

            public let kern: AttributeScopes.SwiftUIAttributes.KerningAttribute

            public let tracking: AttributeScopes.SwiftUIAttributes.TrackingAttribute

            public let baselineOffset: AttributeScopes.SwiftUIAttributes.BaselineOffsetAttribute

            public let accessibility: AttributeScopes.AccessibilityAttributes

            public let foundation: AttributeScopes.FoundationAttributes

        public typealias DecodingConfiguration = AttributeScopeCodableConfiguration

        public typealias EncodingConfiguration = AttributeScopeCodableConfiguration
    }
}

@available(macOS 12.0, iOS 15.0, tvOS 15.0, watchOS 8.0, *)
extension AttributeDynamicLookup {

    public subscript<T>(dynamicMember keyPath: KeyPath<AttributeScopes.SwiftUIAttributes, T>) -> T where T : AttributedStringKey { get }
}

@available(iOS 14.0, macOS 11.0, watchOS 9.0, *)
@available(tvOS, unavailable)
extension Never : WidgetConfiguration {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Never {

    public typealias Body = Never

    public var body: Never { get }
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Optional : Gesture where Wrapped : Gesture {

    public typealias Value = Wrapped.Value
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension Never : Scene {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension Never : View {
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension CGPoint : Animatable {

    public typealias AnimatableData = AnimatablePair<CGFloat, CGFloat>

    public var animatableData: CGPoint.AnimatableData
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension CGSize : Animatable {

    public typealias AnimatableData = AnimatablePair<CGFloat, CGFloat>

    public var animatableData: CGSize.AnimatableData
}

@available(iOS 13.0, macOS 10.15, tvOS 13.0, watchOS 6.0, *)
extension CGRect : Animatable {

    public typealias AnimatableData = AnimatablePair<CGPoint.AnimatableData, CGSize.AnimatableData>

    public var animatableData: CGRect.AnimatableData
}

@available(iOS 16.0, macOS 13.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension Optional : TableRowContent where Wrapped : TableRowContent {

    public typealias TableRowValue = Wrapped.TableRowValue

    public typealias TableRowBody = Never
}

@available(iOS 14.0, macOS 11.0, tvOS 14.0, watchOS 7.0, *)
extension Never : ToolbarContent, CustomizableToolbarContent {
}

@available(iOS 14.0, macOS 11.0, *)
@available(tvOS, unavailable)
@available(watchOS, unavailable)
extension Never : Commands {
}
