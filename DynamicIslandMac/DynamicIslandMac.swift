import SwiftUI
import AppKit

class ColorExtractor {
    enum ExtractionMethod { case average, dominant, kMeans }
    
    static func extractColors(from image: NSImage, method: ExtractionMethod, count: Int) -> [Color] {
        // مؤقت: ألوان عينة
        switch method {
        case .average:
            return [.red]
        case .dominant:
            return [.green, .blue]
        case .kMeans:
            return Array(repeating: .orange, count: count)
        }
    }
}

extension Color {
    func toNSColor() -> NSColor? {
        let mirror = Mirror(reflecting: self)
        if let provider = mirror.descendant("provider") as? NSObject,
           let nsColor = provider.value(forKey: "base") as? NSColor {
            return nsColor
        }
        return nil
    }
}
